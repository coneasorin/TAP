#include "stdafx.h"
#include <iostream>

using namespace std;

int v[100];

void heapify(int v[], int root, int bottom)
{
    int done, maxChild, aux;
    done = 0;
    while ((root * 2 <= bottom) && (!done))
    {
        if (root * 2 == bottom)
            maxChild = root * 2;
        else
            if (v[root * 2] > v[root * 2 + 1])
                maxChild = root * 2;
            else
                maxChild = root * 2 + 1;
        if (v[root] < v[maxChild])
        {
            aux = v[root];
            v[root] = v[maxChild];
            v[maxChild] = aux;
            root = maxChild;
        }
        else
            done = 1;
    }
}

void HeapSort(int v[], int len)
{
    int i, aux;
    for (i = (len / 2) - 1; i >= 0; i--)
        heapify(v, i, len);
    for (i = len - 1; i >= 1; i--)
    {
        aux = v[0];
        v[0] = v[i];
        v[i] = aux;
        heapify(v, 0, i - 1);
    }
}

int main(void)
{
    int i;
    int len;
    cout << "Dati numarul de elemente din vector: ";
    cin >> len;
    for (i = 0; i < len; i++)
    {
        cout << "v[" << i << "] = ";
        cin >> v[i];
    }
    HeapSort(v, len);
    for (i = 0; i < len; i++)
        cout << v[i] << " ";
    system("pause");
}
