#include <iostream>

using namespace std;

void merge(int left[], int right[], int arr[], int n) {
  int leftsize = n/2;
  int rightsize = n-leftsize;
  int i = 0;
  int l = 0;
  int r = 0;


  while(l < leftsize && r < rightsize) {
    if(left[l] < right[r]) {
      arr[i] = left[l];
      i++;
      l++;
    }
    else {
      arr[i] = right[r];
      i++;
      r++;
    }
  }
  while(l < leftsize) {
    arr[i] = left[l];
    i++;
    l++;
  }
  while(r < rightsize) {
    arr[i] = right[r];
    i++;
    r++;
  }
}


void mergesort(int arr[], int n) {
  
  int length = n;
  if(length <= 1) return;

  int middle = length/2;
  int left[middle];
  int right[length-middle];

  int i,j = 0;

  for(int i = 0; i< length; i++) {
      if(i<middle) {
        left[i] = arr[i];
      }
    else {
      right[i] = arr[i];
      j++;
    }
  }
  mergesort(left, middle);
  mergesort(right, (length-middle));
  merge(left, right, arr, length); 
}


int main() {
 int n =9;
  int arr[] = {9,8,7,6,5,4,3,2,1};

  cout << "er";

  mergesort(arr, n);

  for(int i = 0; i< n; i++) {
    cout << arr[i] << " ";
  } 
  return 0;
}