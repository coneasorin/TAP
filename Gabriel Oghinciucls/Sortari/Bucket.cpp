/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bucketSort(vector<float>& arr) {
    int n = arr.size();
    vector<vector<float>> buckets(n);
    for (int i = 0; i < n; i++) 
        buckets[int(n * arr[i])].push_back(arr[i]);
    for (int i = 0; i < n; i++) 
        sort(buckets[i].begin(), buckets[i].end());
    int index = 0;
    for (int i = 0; i < n; i++) 
        for (float val : buckets[i]) 
            arr[index++] = val;
}

int main() {
    vector<float> arr = {0.42, 0.32, 0.23, 0.52, 0.25, 0.47, 0.51};
    bucketSort(arr);
    for (float num : arr) 
        cout << num << " ";
    return 0;
}
