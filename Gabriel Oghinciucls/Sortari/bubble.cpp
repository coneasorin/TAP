/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

void bubbleSort(vector<int>& v) {
 
    int n = v.size();

    for (int i = 0; i < n - 1; i++) {

        bool flag = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
              
                flag = true;
            }
        }
      
        if (!flag)
            break;
    }
}

int main() {
    vector<int> v = {5, 1, 4, 2, 8};

    bubbleSort(v);

    for (auto i : v)
        cout << i << " ";
    return 0;
}