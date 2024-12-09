/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void flip(vector<int>& arr, int i) {
    reverse(arr.begin(), arr.begin() + i + 1);
}

void pancakeSort(vector<int>& arr) {
    for (int curr_size = arr.size(); curr_size > 1; curr_size--) {
        int max_idx = max_element(arr.begin(), arr.begin() + curr_size) - arr.begin();
        if (max_idx != curr_size - 1) {
            flip(arr, max_idx);
            flip(arr, curr_size - 1);
        }
    }
}

int main() {
    vector<int> arr = {3, 6, 2, 7, 5, 8, 1};
    pancakeSort(arr);
    for (int num : arr) 
        cout << num << " ";
    return 0;
}
