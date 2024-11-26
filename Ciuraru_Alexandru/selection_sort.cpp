#include <iostream>
using namespace std;

void citire(int &n, int v[30]) {
    cout << "n = ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Elementul " << i << ": ";
        cin >> v[i];
    }
}

void afisare(int n, int v[30]) {
    for (int i = 0; i < n; i++)
        cout << v[i] << ' ';
}
void SelectionSort(int n, int v[30]) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (v[j] < v[min])
                min = j;
        }
        int a = v[i];
        v[i] = v[min];
        v[min] = a;
    }

}
int main()
{
    int n, v[30];
    citire(n, v);
    SelectionSort(n, v);
    afisare(n, v);
}
