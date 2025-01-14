#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bucketSort(vector<float>& arr) {
    int n = arr.size();
    if (n <= 0) return;

    vector<vector<float>> buckets(n);

    for (int i = 0; i < n; i++) {
        int bucketIndex = n * arr[i];
        buckets[bucketIndex].push_back(arr[i]);
    }

    for (int i = 0; i < n; i++) {
        sort(buckets[i].begin(), buckets[i].end());
    }

    int index = 0;
    for (int i = 0; i < n; i++) {
        for (float value : buckets[i]) {
            arr[index++] = value;
        }
    }
}

int main() {
    vector<float> arr = {0.78, 0.17, 0.39, 0.26, 0.72, 0.94, 0.21, 0.12, 0.23, 0.68};

    cout << "Original array:\n";
    for (float num : arr) {
        cout << num << " ";
    }
    cout << endl;

    bucketSort(arr);

    cout << "Sorted array:\n";
    for (float num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
