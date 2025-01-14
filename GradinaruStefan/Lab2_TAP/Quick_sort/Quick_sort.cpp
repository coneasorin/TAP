#include <iostream>

using namespace std;


void quick_sort(int v[], int p, int u) {
    int i, j, aux, pivot;
    pivot = v[u];
    i = p;
    j = u - 1;

    while (i <= j) {
        while (i <= j && v[i] < pivot)
            i++;
        while (i <= j && v[j] > pivot)
            j--;

        if (i <= j) {
            aux = v[i];
            v[i] = v[j];
            v[j] = aux;
            i++;
            j--;
        }

    }

    // Plas?m pivotul la locul corect
    aux = v[i];
    v[i] = v[u];
    v[u] = aux;

    if (p < i - 1)
        quick_sort(v, p, i - 1);

    if (i + 1 < u)
        quick_sort(v, i + 1, u);



}

void row_cin(int v[], int& n) {

    int i;
    cout << "Enter the size of the vector: ";
    cin >> n;

    for (i = 0; i < n; i++) {
        cout << "v[" << i << "]=";
        cin >> v[i];
    }

}

void row_cout(int v[], int n) {
    int i;
    for (i = 0; i < n; i++)
        cout << v[i] << " ";

}


int main()
{
    int v[100], n;
    row_cin(v, n);
    quick_sort(v, 0, n - 1);
    row_cout(v, n);

    return 0;
}
