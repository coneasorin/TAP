#include <iostream>
#include <cmath>
using namespace std;


float findMax(float arr[], int n) {
    float max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}


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
    
    float maxValue = findMax(arr, n);
    
    int numBuckets = 10; 
    float buckets[numBuckets][n];
    int bucketSizes[numBuckets] = {0}; 
    
    for (int i = 0; i < n; i++) {
        int bucketIndex = (arr[i] * numBuckets) / (maxValue + 1);
        buckets[bucketIndex][bucketSizes[bucketIndex]++] = arr[i];
    }
    
    int index = 0;
    for (int i = 0; i < numBuckets; i++) {
        if (bucketSizes[i] > 0) {
            insertionSort(buckets[i], bucketSizes[i]);
            for (int j = 0; j < bucketSizes[i]; j++) {
                arr[index++] = buckets[i][j];
            }
        }
    }
}


int main() {
    int n;
    cout << "Give number of elements: "; cin >> n;
    float arr[n];

    for(int i = 0; i<n; i++) {
        cout << "Insert element in array: "; cin >> arr[i];
    }

    bucketSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}