#include <iostream>
using namespace std;

void selectionSort(int v[], int n) {
    int i, j, minIndex;

    for (i = 0; i < n - 1; i++) {
        minIndex = i;

        // Găsim minimul în partea nesortată a vectorului
        for (j = i + 1; j < n; j++) {
            if (v[j] < v[minIndex]) {
                minIndex = j;
            }
        }

        // Facem un singur schimb cu `swap` dacă am găsit un minim diferit
        if (minIndex != i) {
            swap(v[i], v[minIndex]);
        }
    }
}

int main() {
    int n, i, v[50];

    // Citirea numărului de elemente
    cout<<"Introduceti dimensiunea sirului: ";
    cin >> n;

    cout<<"Introduceti elementele sirului: "<<endl;

    // Citirea elementelor vectorului
    for (i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Apelul funcției de sortare prin selecție
    selectionSort(v, n);

    // Afișarea vectorului sortat
    for (i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}
