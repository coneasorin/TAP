#include <iostream>
#include <vector>

using namespace std;

void QuickSort(int stanga, int dreapta, vector<int>& a) {
    int i = stanga, j = dreapta, x = a[(stanga + dreapta) / 2], y;

    while (i <= j) {
        while (a[i] < x) {
            i++;
        }
        while (a[j] > x) {
            j--;
        }
        if (i <= j) {
            y = a[i];
            a[i] = a[j];
            a[j] = y;
            i++;
            j--;
        }
    }
    if (stanga < j)
        QuickSort(stanga, j, a);
    if (i < dreapta)
        QuickSort(i, dreapta, a);
}

int main() {
    int n;

    cout << "Dati n: ";
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cout << "a[" << i + 1 << "] = ";
        cin >> a[i];
    }

    QuickSort(0, n - 1, a);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

