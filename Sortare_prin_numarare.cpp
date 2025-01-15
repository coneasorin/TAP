#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void CountSort(vector<int>& a, int length) {
    // Find the maximum element in the input to determine the size of the counts array
    int max_value = *max_element(a.begin(), a.end());

    // Create a counts array of size (max_value + 1)
    vector<int> counts(max_value + 1, 0);

    // Count the occurrences of each element
    for (int i = 0; i < length; i++) {
        counts[a[i]]++;
    }

    // Rebuild the array based on the counts
    int outputPos = 0;
    for (int i = 0; i <= max_value; i++) {
        for (int j = 0; j < counts[i]; j++) {
            a[outputPos] = i;
            outputPos++;
        }
    }
}

int main() {
    int len;

    cout << "Enter the number of elements: ";
    cin >> len;

    vector<int> v(len);

    cout << "Enter the elements:" << endl;
    for (int i = 0; i < len; i++) {
        cout << "v[" << i << "] = ";
        cin >> v[i];
    }

    CountSort(v, len);

    cout << "Sorted array: ";
    for (int i = 0; i < len; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
