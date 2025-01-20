#include <iostream>

using namespace std;

void bubble_sort(int v[], int n) {
    int m, aux;

    m = 0;
    while (!m) {
        m = 1;
        for (int i = 0; i < n; i++) {
            if (v[i - 1] > v[i]) {
                aux = v[i - 1];
                v[i - 1] = v[i];
                v[i] = aux;
                m = 0;
            }

        }
    }
}

int main()
{
    int n, v[100];
    cout << "Lungime vector: " << endl;
    cin >> n;
    cout << "Elementele: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    bubble_sort(v, n);
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    return 0;
}
