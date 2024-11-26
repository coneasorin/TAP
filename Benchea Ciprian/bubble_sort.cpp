#include <iostream>
using namespace std;

void schimba(int& a, int& b) {
    int aux = a;
    a = b;
    b = aux;
}

int main()
{
    int n, i, j, v[50];
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> v[i];

    bool schimbat;
    do {
        schimbat = false;
        for (i = 0; i < n - 1; i++) {
            if (v[i] > v[i + 1]) {
                schimba(v[i], v[i + 1]);
                schimbat = true;
            }
        }
    } while (schimbat);

    for (i = 0; i < n; i++)
        cout << v[i] << " ";

    return 0;
}
