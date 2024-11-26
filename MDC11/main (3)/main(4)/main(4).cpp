#include <iostream>
#include <vector>
using namespace std;
void bubbleSort(vector<double>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                 swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    vector<double> vec;
    double input;

    cout << "Introduceti numere reale (ne nule), terminati cu 0: \n";

    while (true) {
          cin >> input;
        if (input == 0) break;
        vec.push_back(input);
    }

    if (vec.empty()) {
        cout << "Vectorul este gol!\n";
        return 1;
    }

    bubbleSort(vec);

    cout << "Vectorul sortat: ";
    for (const auto& num : vec) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
