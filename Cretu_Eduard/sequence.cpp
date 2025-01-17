#include <iostream>

using namespace std;

int sequence(int arr[], int n, int key) {
    for(int i = 0; i<n; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}

void addElements(int v[], int n) {
    int x;
    for(int i = 0; i<n; i++) {
        cout << "Give element #"<< i+1 << ": "; cin >> x;
        v[i] = x;
    }
}




int main() {
    int n, k, found;
    cout << "Give number of array elements: "; cin >> n;
    int v[n];
    addElements(v,n);
    
    cout << "Give the key element: "; cin >> k;

    found  = sequence(v,n,k);

    if(found != -1) {
        cout << "Element was found at position: " << found+1;
    }else {
        cout << "Element not found";
    }

    return 0;
}