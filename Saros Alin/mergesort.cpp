#include "pch.h"
#include <iostream>

using namespace std;
void sort(int v[], int l, int mid, int r){
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int* L = new int[n1];
    int* R = new int[n2];

    for (int i = 0; i < n1; i++)
        L[i] = v[l + i];
    
    for (int j = 0; j < n2; j++)
        R[j] = v[mid + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            v[k] = L[i];
            i++;
        } 
        else {
            v[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        v[k] = L[i];
        i++;
        k++;
    }
    
    while (j < n2) {
        v[k] = R[j];
        j++;
        k++;
    }

    delete[] L;
    delete[] R;

}
void msort(int v[], int l, int r){
    if (l >= r)
        return;
    int mid = l + (r - l) / 2;

    msort(v, l, mid);
    msort(v, mid + 1, r);

    sort(v, l, mid, r);
}
int main()
{
    int v[] = { 23, 34, 56, 3, 6, 10, 45 };
    int n = sizeof(v) / sizeof(v[0]);
   
    msort(v, 0, n - 1);
    
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
        

    return 0;
}
