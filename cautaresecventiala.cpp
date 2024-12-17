#include <iostream>
using namespace std;

int main() {
    unsigned numbers[101], target, numElements;
    bool found = false;

    cout << "Introdu valoarea cautata: ";
    cin >> target;

    cout << "Introdu nr de elemente al vectorului: ";
    cin >> numElements;

    cout << "Introdu elementele vectorului: ";
    for (unsigned i = 0; i < numElements; ++i) {
        cin >> numbers[i];
        if (numbers[i] == target) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "Numarul " << target << " exista in vector." << endl;
    }
    else {
        cout << "Numarul " << target << " nu exista in vector." << endl;
    }

    return 0;
}
