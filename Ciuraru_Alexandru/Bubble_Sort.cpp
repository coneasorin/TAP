#include <iostream>

using namespace std;

void BubbleSort(int v[], int n) {
	int i, j;
	for(i = 0;i<n;i++)
		for (j = 0; j < n-i-1; j++) {
			if (v[j] > v[j + 1]) {
				int temp = v[j];
				v[j] = v[j + 1];
				v[j + 1] = temp;
			}
		}
}

int main()
{
	int n, v[100];
	cout << "n = ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Element " << i << ": ";
		cin >> v[i];
	}
	BubbleSort(v, n);
	for (int i = 0; i < n; i++)
		cout << v[i] << ' ';
}
