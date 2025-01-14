#include <iostream>
#include <vector>
using namespace std;

int flipSort(vector<int>& arr) {
    int n = arr.size();
    int swapCount = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                
                swap(arr[j], arr[j + 1]);
                swapCount++;
            }
        }
    }

    return swapCount;
}

int main() {
    vector<int> arr = {5, 3, 2, 4, 1};

    cout << "Original array:\n";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    int swaps = flipSort(arr);

    cout << "Sorted array:\n";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Number of swaps: " << swaps << endl;

    return 0;
}
