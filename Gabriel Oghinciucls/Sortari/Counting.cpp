/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

void countingSort(vector<int>& arr) {
    int maxElement = *max_element(arr.begin(), arr.end());
    int minElement = *min_element(arr.begin(), arr.end());
    int range = maxElement - minElement + 1;
    vector<int> count(range, 0), output(arr.size());
    for (int i = 0; i < arr.size(); i++) 
        count[arr[i] - minElement]++;
    for (int i = 1; i < count.size(); i++) 
        count[i] += count[i - 1];
    for (int i = arr.size() - 1; i >= 0; i--) {
        output[count[arr[i] - minElement] - 1] = arr[i];
        count[arr[i] - minElement]--;
    }
    for (int i = 0; i < arr.size(); i++) 
        arr[i] = output[i];
}

int main() {
    vector<int> arr = {5, -2, 9, 0, -2, 3, 5};
    countingSort(arr);
    for (int num : arr) 
        cout << num << " ";
    return 0;
}