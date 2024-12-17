#include <iostream>
using namespace std;

void bubbles(int v[], int n) {
    int i, k, aux;

    k = 0;
    while (!k) {
        k = 1;
        for (i = 1; i < n; i++) { 
            if (v[i - 1] > v[i]) {
                aux = v[i - 1];
                v[i - 1] = v[i];
                v[i] = aux;
                k = 0;
            }
        }
    }
}

int main() {
    int n, i, v[50];
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> v[i];
    }
    bubbles(v, n);
    for (i = 0; i < n; i++) {
        cout << v[i];
        if (i < n - 1) { 
            cout << " ";
        }
    }
    cout << endl; 
    return 0;
}
