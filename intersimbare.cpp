#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Dami numarul de elemente din lista: "; cin >> n;
    int v[n];
    for(int i = 0; i<n; i++) {
        cout << "Dami elementul " << i+1 << ": "; cin >> v[i];
    }
    for(int i = 0; i<n-1; i++) {
        for(int j = i+1; j<n; j++) {
            if(v[i]>v[j]) {
                swap(v[i],v[j]);
            }
        }
    }

    for(int i = 0; i<n; i++) {
        cout << v[i] << ' ';
    }
}