#include <iostream>
using namespace std;

void sort_inserare_directa(int length, float array[100]) {
    int i, j;
    float key;
    for (i = 1; i < length; i++) {
        key = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}

int main() {
    int i, length;
    float array[100];

    cout << "Introduceti nr. elementelor n = ";
    cin >> length;

    if (length <= 0 || length > 100) {
        cout << "Numarul de elemente trebuie sa fie intre 1 si 100!" << endl;
        return 1;
    }

    cout << "Introduceti elementele vectorului de sortat:" << endl;

    for (i = 0; i < length; i++) {
        cout << "array[" << i + 1 << "] = ";
        cin >> array[i];
    }

    cout << "Elementele vectorului nesortat sunt: " << endl;
    for (i = 0; i < length; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    cout << "VECTORUL SORTAT PRIN METODA INSERARII DIRECTE:" << endl;
    sort_inserare_directa(length, array);

    for (i = 0; i < length; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
