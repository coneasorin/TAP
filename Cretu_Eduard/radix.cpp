#include <iostream>
using namespace std;


int getMax(int arr[], int n)    {
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

void addElements(int v[], int n) {
    int x;
    for(int i = 0; i<n; i++) {
        cout << "Give element #"<< i+1 << ": "; cin >> x;
        v[i] = x;
    }
}


void countSort(int arr[], int n, int exp)   {
    int output[n];
    int i, count[10] = { 0 };

    for (i = 0; i < n; i++) {
        count[(arr[i] / exp) % 10]++;
    }
    for (i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }
    for (i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}


void radixsort(int arr[], int n)    {
    int m = getMax(arr, n);
    for (int exp = 1; m / exp > 0; exp *= 10) {
        countSort(arr, n, exp);
    }
}


void display(int arr[], int n)  {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}


int main()  {
    int n;
    cout << "Give number of array elements: "; cin >> n;
    int v[n];
    addElements(v,n);
    radixsort(v, n);
    display(v, n);
    return 0;
}