#include <iostream> // Include librăria pentru input/output
using namespace std; // Folosește spațiul de nume std pentru a evita prefixul "std::"


void selectionSort(int arr[], int n) {
   
    for (int i = 0; i < n - 1; i++) {
       
        int minIndex = i;
        
        
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; 
            }
        }

        
        if (minIndex != i) {
            
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}


void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl; 
}

int main() {
    int n;

    cout << "Introduceti numarul de elemente: ";
    cin >> n;

    int arr[n]; 

   
    cout << "Introduceti elementele sirului: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }

   
    selectionSort(arr, n);

  
    cout << "Sirul sortat este: ";
    printArray(arr, n);

    return 0; 
}
