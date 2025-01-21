#include <iostream>
using namespace std;

int main()
{
    int a[100], n, x;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    cin >> x;

    int st = 1, dr = n;
    int gasit = -1; 
    while(st <= dr) { 
        int mij = (st + dr) / 2;
        if(a[mij] == x) {
            gasit = mij;
            break;
        } else if(a[mij] < x) {
            st = mij + 1;
        } else {
            dr = mij - 1;
        }
    }

    if(gasit == -1) {
        cout << "Nu am gasit valoarea " << x << " in sir!";
    } else {
        cout << "Valoarea " << x << " se gaseste in sir pe pozitia " << gasit << "!";
    }
    return 0;
}