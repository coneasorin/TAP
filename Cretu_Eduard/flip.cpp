#include <iostream>
using namespace std; 

void flip(int arr[], int i) { 
    int temp, start = 0; 
    while (start < i) { 
        temp = arr[start]; 
        arr[start] = arr[i]; 
        arr[i] = temp; 
        start++; 
        i--; 
    } 
} 

void addElements(int v[], int n) {
    int x;
    for(int i = 0; i<n; i++) {
        cout << "Give element #"<< i+1 << ": "; cin >> x;
        v[i] = x;
    }
}

int findMax(int arr[], int n) { 
    int mi, i; 
    for (mi = 0, i = 0; i < n; ++i) 
        if (arr[i] > arr[mi]) 
                mi = i; 
    return mi; 
} 
 
void flipSort(int *arr, int n) { 

    for (int i = n; i > 1;  i--) {          
        int mi = findMax(arr, i);        
        if (mi != i-1) {             
            flip(arr, mi); 
            flip(arr, i-1); 
        } 
    } 
} 

void display(int arr[], int n) { 
    for (int i = 0; i < n; ++i) {
        cout<< arr[i]<<" "; 
    }
} 
 

int main()  { 
    int n;
    cout << "Give number of array elements: "; cin >> n;
    int v[n];
    addElements(v,n);
    flipSort(v, n); 
 
    cout<<"Sorted Array\n";
    display(v, n); 
 
    return 0; 
} 