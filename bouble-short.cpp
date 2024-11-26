// sa da un vector cu n element unde n este numar natural citid de la tastatura. sa se citeasc n elemente si sa afiseze vectorul sorta cu metoda bulelor
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "give a vector size: ";
     cin >> n;
    int v[n];

    for (int i =0; i<n; i++){
        cout << "give a number: ";
        cin >> v[i];
    }

    for (int i = 0; i < n-1;i++){
        for(int j =0; j<n-i-1; j++){
            if (v[j] > v[j+1]) {
                swap(v[j+1],v[j]);
            }
        }
    }

    for (int i =0; i<n; i++){
        cout <<  v[i];
    }
return 0;
};