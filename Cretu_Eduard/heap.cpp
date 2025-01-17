#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i){
	int largest = i;
	int l = 2 * i + 1; 
	int r = 2 * i + 2; 

	if (l < n && arr[l] > arr[largest])
		largest = l;
	if (r < n && arr[r] > arr[largest])
		largest = r;
	if (largest != i) {
		swap(arr[i], arr[largest]);
		heapify(arr, n, largest);
	}
}

void heapSort(int arr[], int n){
	for (int i = n / 2 - 1; i >= 0; i--) {
		heapify(arr, n, i);
    }
	for (int i = n - 1; i >= 0; i--) {
		swap(arr[0], arr[i]);
		heapify(arr, i, 0);
	}
}

void addElements(int v[], int n) {
    int x;
    for(int i = 0; i<n; i++) {
        cout << "Give element #"<< i+1 << ": "; cin >> x;
        v[i] = x;
    }
}


void display(int arr[], int n){
	for (int i = 0; i < n; ++i) {
		cout << arr[i] << " ";
    }
}


int main(){
	int n;
    cout << "Give number of array elements: "; cin >> n;
    int v[n];
    addElements(v,n);

	for(int i=n/2 -1;i>=0;i--) {
	    heapify(v,n,i);
    }
	heapSort(v, n);
	display(v, n);
    return 0;
}

