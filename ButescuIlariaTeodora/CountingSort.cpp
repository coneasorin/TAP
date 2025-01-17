#include <iostream>
#include <vector>

using namespace std;

// Funcție pentru citirea unui vector
void citire(int v[], int &n) {
    cout << "Introduceti dimensiunea vectorului: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "v[" << i << "] = ";
        cin >> v[i];
    }
}

// Funcție pentru afișarea unui vector
void afisare(int v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

// Funcție pentru sortarea folosind Counting Sort
void countingSort(int v[], int n, int k) {
    vector<int> count(k + 1, 0); // Vector de frecvență, inițializat cu 0

    // Numărăm aparițiile fiecărei valori
    for (int i = 0; i < n; i++) {
        count[v[i]]++;
    }

    // Calculez suma cumulată pentru a afla poziția corectă a fiecărui element
    for (int i = 1; i <= k; i++) {
        count[i] += count[i - 1];
    }

    // Construiesc vectorul sortat
    vector<int> output(n); // Alternativă sigură pentru array-ul dinamic
    for (int i = n - 1; i >= 0; i--) {
        output[count[v[i]] - 1] = v[i];
        count[v[i]]--;
    }

    // Copiez rezultatul în vectorul inițial
    for (int i = 0; i < n; i++) {
        v[i] = output[i];
    }
}

// Funcția principală
int main() {
    int v[50], n, k;

    // Citim vectorul
    citire(v, n);

    // Găsim valoarea maximă din vector
    k = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] > k) {
            k = v[i];
        }
    }

    // Aplicăm Counting Sort
    countingSort(v, n, k);

    // Afișăm vectorul sortat
    cout << "Vectorul sortat este: ";
    afisare(v, n);

    return 0;
}
