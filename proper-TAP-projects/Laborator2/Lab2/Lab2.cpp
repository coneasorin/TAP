#include <iostream>
#include <math.h>
#include <vector>
#include <Windows.h>
using namespace std;

/* Sortare prin interschimbare
//Subrutina SwapSort
void static SwapSort(int a[]) {
	for (int i = 0; i < 10; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

// Program principal
int main() {
	int arr[10] = { 33, 15, 57, 10, 11, 1, 8, 48, 100, 16 };
	// Rand initial
	cout << "Initial array:" << endl;
	Sleep(2000);
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	// Initializam subrutina
	Sleep(2000);
	SwapSort(arr);
	// Afisam randul filtrat prin subrutina
	cout << "\nInterchanged array:" << endl;
	Sleep(2000);

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
	// Pauza de display
	Sleep(2000);
	system("pause");
	return 0;
}
*/

// MergeSort


void merge(vector<int>& arr, int left, int mid, int right) {
	vector<int> leftArr(arr.begin() + left, arr.begin() + mid + 1);
	vector<int> rightArr(arr.begin() + mid + 1, arr.begin() + right + 1);
	int i = 0, j = 0, k = left;

	while (i < leftArr.size() && j < rightArr.size()) {
		arr[k++] = (leftArr[i] <= rightArr[j]) ? leftArr[i++] : rightArr[j++];
	}
	while (i < leftArr.size()) arr[k++] = leftArr[i++];
	while (j < rightArr.size()) arr[k++] = rightArr[j++];
}

void mergeSort(vector<int>& arr, int left, int right) {
	if (left < right) {
		int mid = left + (right - left) / 2;
		mergeSort(arr, left, mid);
		mergeSort(arr, mid + 1, right);
		merge(arr, left, mid, right);
	}
}

int main() {
	vector<int> arr = { 38, 27, 43, 3, 9, 82, 10 };
	mergeSort(arr, 0, arr.size() - 1);
	for (int num : arr) cout << num << " ";
	return 0;
}
