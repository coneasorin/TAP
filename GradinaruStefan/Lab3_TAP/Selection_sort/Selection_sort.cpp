#include <iostream>

using namespace std;

void selection_sort(int v[], int n) {
    int i, j, min_index;

    for (i = 0; i < n - 1; i++) {
        min_index = i;

        // Găsim minimul în partea nesortată a vectorului
        for (j = i + 1; j < n; j++) {
            if (v[j] < v[min_index]) {
                min_index = j;
            }
        }

        // Facem un singur schimb cu `swap` dacă am găsit un minim diferit
        if (min_index != i) {
            swap(v[i], v[min_index]);
        }
    }
}

int main() {
    int n, i, v[100];

    // Citirea numărului de elemente
    cout << " Enter the vector size : ";

    cin >> n;

    cout << " Enter the vector elements: " << endl;

    // Citirea elementelor vectorului
    for (i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Apelul funcției de sortare prin selecție
    selection_sort(v, n);

    // Afișarea vectorului sortat
    for (i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}