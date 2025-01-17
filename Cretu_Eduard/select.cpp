#include <iostream>

using namespace std;


void addElements(int v[], int n) {
    int x;
    for(int i = 0; i<n; i++) {
        cout << "Give element #"<< i+1 << ": "; cin >> x;
        v[i] = x;
    }
}


void display(int v[], int n) {
    for(int i= 0; i< n; i++) {
        cout << v[i];
    }
}

void selectSort(int v[], int n) {
    for(int i= 0; i< n-1; i++) {
        int min = i;
        for(int j= i; j< n; j++) {
            if(v[j]<v[min]) {
                min = j;
            }
        }
        swap(v[i],v[min]);
    }
}


int main() {

    int n;
    cout << "Give number of array elements: "; cin >> n;

    int v[n];

    addElements(v,n);
    selectSort(v,n);
    display(v,n);

}