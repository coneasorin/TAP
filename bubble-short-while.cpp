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
    };

    while(int i=0 and i < n-1 and i++){
        while(int j=0 and j <n-i-1 and j++){
            if (v[j] > v[j+1]) {
                swap(v[j+1],v[j]);
            };
        };
    };

    for (int i =0; i<n; i++){
        cout <<  v[i];
    };
return 0;
};