#include "pch.h"
#include <iostream>

using namespace System;
using namespace std;

int main()
{
    int bil[] = { 34, 65, 1, 63, 95, 39, 21, 96, 81, 75, 13 };
    int n = sizeof bil / sizeof(int);
    int temp;
    int j;

    for (int i = 1; i < n; i++) {
        temp = bil[i];
        j = i - 1;
        while (j >= 0 && bil[j] > temp) {
            bil[j + 1] = bil[j];
            j = j - 1;
        }
        bil[j + 1] = temp;
    }
    for (int i = 0; i < n; i++)
        cout << bil[i] << " ";
    return 0;
}
