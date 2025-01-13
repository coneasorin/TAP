#include <iostream>
using namespace std;

void flip(int arr[], int n) {
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int findMaxIndex(int arr[], int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

void flippingSort(int arr[], int n) {
    for (int currSize = n; currSize > 1; currSize--) {
        int maxIndex = findMaxIndex(arr, currSize);
        if (maxIndex != currSize - 1) {
            flip(arr, maxIndex + 1);
            flip(arr, currSize);
        }
    }
}

int main() {
    int n;
    cout << "Introdu numarul de elemente: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Introdu " << n << " numere: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    flippingSort(arr, n);

    cout << "Tabloul sortat este: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    return 0;
}
