#include <iostream>
using namespace std;
void sortare(int a[], int st, int dr) { 
    if (st >= dr) {
        return 0;
    }
    int mijloc = (st + dr) / 2;
    sortare(a, st, mijloc);
    sortare(a, mijloc + 1, dr);
    int tmp[101], k = 0;
    int i = st, j = mijloc + 1;
    while (i <= mijloc && j <= dr) {
        if (a[i] < a[j]) {
            tmp[++k] = a[i++];
        }
        else {
            tmp[++k] = a[j++];
        }
    }
    while (i <= mijloc) {
        tmp[++k] = a[i++];
    }
    while (j <= dr) {
        tmp[++k] = a[j++];
    }
    i = st;
    j = 1;
    while (i <= dr) {
        a[i] = tmp[j];
        i++;
        j++;
    }
}

int main()
{
    int n, a[101];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    } 
    sortare(a, 1, n);
    cout << "Sirul sortat este: ";
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
