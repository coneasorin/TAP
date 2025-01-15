#include <iostream>
using namespace std;

// Funcție de citire a vectorului
void citire(int v[], int &n) {
    cout << "Introduceti dimensiunea vectorului: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "v[" << i << "] = ";
        cin >> v[i];
    }
}

// Funcție de afișare a vectorului
void afisare(int v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

// Funcție pentru implementarea metodei Flipping Sort
void flippingSort(int v[], int n) {
    for (int i = 1; i < n; i++) {
        int key = v[i];
        int j = i - 1;

        // Mutăm elementele mai mari decât key cu o poziție în față
        while (j >= 0 && v[j] > key) {
            v[j + 1] = v[j];
            j--;
        }
        // Inserăm cheia la poziția corectă
        v[j + 1] = key;
    }
}

int main() {
    int v[50], n;

    // Citire vector
    citire(v, n);

    // Sortare cu metoda Flipping Sort
    flippingSort(v, n);

    // Afișare vector sortat
    afisare(v, n);

    return 0;
}
