#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
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

    sort(arr, arr + n);

    int target;
    cout << "Introdu numarul pe care il cauti: ";
    cin >> target;

    int result = binarySearch(arr, n, target);
    if (result != -1) {
        cout << "Numarul " << target << " a fost gasit la pozitia " << result << endl;
    } else {
        cout << "Numarul " << target << " nu a fost gasit." << endl;
    }

    delete[] arr;
    return 0;
}
