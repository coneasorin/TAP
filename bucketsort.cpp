#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void BucketSort(vector<int>& arr, int n) {
    int max_value = *max_element(arr.begin(), arr.end());
    vector<int> buckets(max_value + 1, 0);

    for (int i = 0; i < n; ++i) {
        ++buckets[arr[i]];
    }

    int i = 0;
    for (int j = 0; j <= max_value; ++j) {
        for (int k = buckets[j]; k > 0; --k) {
            arr[i++] = j;
        }
    }
}

int main() {
    int len;

    cout << "Dati numarul de elemente n: ";
    cin >> len;

    vector<int> arr(len);

    for (int i = 0; i < len; i++) {
        cout << "v[" << i << "] = ";
        cin >> arr[i];
    }

    BucketSort(arr, len);

    cout << "Sortat: ";
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
