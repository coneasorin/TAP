
#include <iostream>

using namespace std;

int maxel(int arr[], int n) {
    int max = 1;
    for(int i = 0; i<n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void count_sort(int arr[], int n)
{

    int k = maxel(arr, n);
    //cout << k;

    int count[k + 1] = { 0 };

    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    for (int i = 1; i <= k; i++) {
        count[i] = count[i] + count[i - 1];
    }

    int ans[n];
    for (int i = n - 1; i >= 0; i--) {
        ans[--count[arr[i]]] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        arr[i] = ans[i];
    }
}
int main()
{
    int arr[] = { 1, 3, 7, 0, 1, 1, 6, 3, 0, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    count_sort(arr, n);
    cout << "Array after performing count sort : " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
