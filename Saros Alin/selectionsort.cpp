#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
    int n, a[50], imin;
    cin >> n;
    for (int i = 0; i < n ; i++)
        cin >> a[i];
    for (int i = 0; i < n - 1; i++) {
        imin = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[imin])
                imin = j;
        swap(a[i], a[imin]);
    }

    for (int i = 0; i < n ; i++)
        cout << a[i] << " ";
    return 0;
}
