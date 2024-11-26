#include <iostream>

using namespace std;

void fillArray(int v[], int n) {
    for(int i = 0; i<n; i++) {
        cout << "Input element #" << i+1 << ": "; cin >> v[i];
    }
}

void interschimbareSwap(int v[], int a, int b) {
    int temp = v[a];
    v[a] = v[b];
    v[b] = temp;
}


void interschimbare(int v[], int n) {
    for(int i = 0; i<n-1; i++) {
            for(int j = i+1; j<n; j++) {
                if(v[i]>v[j]) {
                    interschimbareSwap(v, i, j);
                }
            }
        }
}

void display(int v[], int n){
  for(int i = 0; i<n; i++) {
        cout << v[i] << ' ';
    }  
}

int main() {
    int n;
    cout << "Give the number of elements in the list: "; cin >> n;
    int v[n];

    fillArray(v,n);

    interschimbare(v,n);

    display(v,n);

    return 0;

}