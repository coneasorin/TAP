#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

     
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n;
    cout << "Introduceti numarul de elemente: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Introduceti elementele: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    insertionSort(arr);

    cout << "Sirul sortat este: ";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
