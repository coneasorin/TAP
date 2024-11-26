#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
    // initializing 1st container
    vector<int> arr1 = { 1, 4, 6, 3 };
 
    // initializing 2nd container
    vector<int> arr2 = { 2, 7, 5 };

    // declaring resultant container
    vector<int> arr3(7);
 
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
 
    merge(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), arr3.begin());
 
    cout << "The container after merging initial containers is : ";
 
    for (int i = 0; i < arr3.size(); i++)
        cout << arr3[i] << " ";
    return 0;
}