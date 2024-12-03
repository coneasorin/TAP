#include "pch.h"
#include <iostream>
using namespace System;
using namespace std;

void countsort(int arr[], int n) {
    int k = arr[0];
    for (int i = 0; i < n; i++) {
        k = max(k, arr[i]);
    }
    int count[k] = { 0 };
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    for (int i = 1; i <= k; i++) {
        count[i] += count[i - 1];
    }
    int output[n];
    for (int i = n - 1; i >= 0; i--) {
        output[--count[arr[i]]] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }


int main(){
    int arr[] = { 2, 4, 2, ,6, 7, 1, 3, 3, 4 };
    countsort(arr, 9);
    for (int i = 0; i < 9; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
