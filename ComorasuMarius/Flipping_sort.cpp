#include <iostream>

using namespace std;

void flip(int arr[], int i)
{
    int temp, start = 0;
    while (start < i) {
        temp = arr[start];
        arr[start] = arr[i];
        arr[i] = temp;
        start++;
        i--;
    }
}

void pancakeSort(int arr[], int n)
{
    if (n == 1)
        return;
    int mi = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > arr[mi]) {
            mi = i;
        }
    }

    if (mi != 0) {
        flip(arr, mi);
    }
    flip(arr, n - 1);
    pancakeSort(arr, n - 1);
}

int main()
{
    int arr[] = { 23, 25, 12, 50, 10, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);

    pancakeSort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}