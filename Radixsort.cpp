#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void RadixSort(vector<int>& arr) {
    int n = arr.size();
    int m = *max_element(arr.begin(), arr.end());
    int exp = 1;

    while (m / exp > 0) {
        vector<int> bucket(10, 0);
        vector<int> b(n);

            for (int i = 0; i < n; i++) {
            bucket[arr[i] / exp % 10]++;
        }

        for (int i = 1; i < 10; i++) {
            bucket[i] += bucket[i - 1];
        }

               for (int i = n - 1; i >= 0; i--) {
            b[--bucket[arr[i] / exp % 10]] = arr[i];
        }

        for (int i = 0; i < n; i++) {
            arr[i] = b[i];
        }

        exp *= 10;  
    }
}

int main() {
    int len;

    cout << "Dati numarul de elemente din vector: ";
    cin >> len;

    vector<int> arr(len);

    for (int i = 0; i < len; i++) {
        cout << "v[" << i << "] = ";
        cin >> arr[i];
    }

    RadixSort(arr);

    cout << "Sortat: ";
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
