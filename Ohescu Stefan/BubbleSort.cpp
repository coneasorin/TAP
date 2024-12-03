#include "pch.h"
#include <iostream>

using namespace System;
using namespace std;

int main()
{
    int i, j, m = 0;
    int a[6] = { 11, 99, 3, 54, 843, 12 };
    for (i = 0; i < 6; i++) {
        for (j = i + 1; j < 6; j++)
        {
            if (a[j] < a[i]) {
                m = a[i];
                a[i] = a[j];
                a[j] = m;
            }
        }
    }
    cout << "Ordonate: ";
    for (i = 0; i < 6; i++) {
        cout << a[i] << "\t";
    }
    return 0;
}