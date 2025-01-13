#include <iostream>
using namespace std;

void insertionSort(float arr[], int n) {
    for (int i = 1; i < n; i++) {
        float key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void bucketSort(float arr[], int n) {
    float** buckets = new float*[n];
    int* bucketSizes = new int[n](); 
    int* bucketCapacities = new int[n]; 

    for (int i = 0; i < n; i++) {
        bucketCapacities[i] = 1; 
        buckets[i] = new float[bucketCapacities[i]];
    }

    for (int i = 0; i < n; i++) {
        int bucketIndex = n * arr[i]; 

        if (bucketSizes[bucketIndex] == bucketCapacities[bucketIndex]) {
            bucketCapacities[bucketIndex] *= 2;
            float* newBucket = new float[bucketCapacities[bucketIndex]];
            for (int j = 0; j < bucketSizes[bucketIndex]; j++) {
                newBucket[j] = buckets[bucketIndex][j];
            }
            delete[] buckets[bucketIndex];
            buckets[bucketIndex] = newBucket;
        }

        buckets[bucketIndex][bucketSizes[bucketIndex]++] = arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (bucketSizes[i] > 1) {
            insertionSort(buckets[i], bucketSizes[i]);
        }
    }

    int index = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < bucketSizes[i]; j++) {
            arr[index++] = buckets[i][j];
        }
        delete[] buckets[i]; 
    }

    delete[] buckets;
    delete[] bucketSizes;
    delete[] bucketCapacities;
}

int main() {
    int n;

    cout << "Introdu numarul de elemente: ";
    cin >> n;

    float* arr = new float[n]; 

    cout << "Introdu " << n << " numere (valori reale intre 0 si 1): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bucketSort(arr, n);

    cout << "Tabloul sortat este: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr; 
    return 0;
}
