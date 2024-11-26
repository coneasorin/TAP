#include <iostream>
using namespace std;

void flip(int v[], int i)
{
    int temp, start = 0;
    while (start < i) {
        temp = v[start];
        v[start] = v[i];
        v[i] = temp;
        start++;
        i--;
    }
}
int findMax(int v[], int n)
{
    int mi = 0, i;
    for (i = 0; i < n; i++)
        if (v[i] > v[mi])
            mi = i;
    return mi;
}
void flipSort(int v[], int n)
{
    int i;
    for (i = n; i > 0; i--) {
        int mi = findMax(v, i);
        if (mi != i-1) {
                flip(v, mi);
                flip(v, i-1);
            
        }
    }
}
int main()
{
    int n, v[100];
    cout << "n = ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i << ": ";
        cin >> v[i];
    }
    flipSort(v, n);
    for (int i = 0; i < n; i++)
        cout << v[i] << ' ';


}
