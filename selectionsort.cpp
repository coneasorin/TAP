#include "stdafx.h"
#include <iostream>
#include<conio.h>

using namespace std;

void SelectionSort(int n, int v[])
{
    for (int i = 0; i < n; i++)
    {
        int min = i, aux;
        for (int j = i + 1; j < n; j++)
            if (v[min] > v[j])
                min = j;
        aux = v[min];
        v[min] = v[i];
        v[i] = aux;
    }
}

int main()
{
    int n, i, numere[100];
    cout << "Numarul de numere: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Introduceti numarul #" << (i + 1) << ": ";
        cin >> numere[i];
    }
    SelectionSort(n, numere);
    cout << endl << "Vectorul sortat:";
    for (i = 0; i < n; i++)
        cout << " " << numere[i];
    system("pause");
}
