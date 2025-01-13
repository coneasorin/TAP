#include <iostream>
using namespace std;

int directSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
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

    int target;
    cout << "Introdu numarul pe care il cauti: ";
    cin >> target;

    int result = directSearch(arr, n, target);
    if (result != -1) {
        cout << "Numarul " << target << " a fost gasit la pozitia " << result << endl;
    } else {
        cout << "Numarul " << target << " nu a fost gasit." << endl;
    }

    delete[] arr;
    return 0;
}
