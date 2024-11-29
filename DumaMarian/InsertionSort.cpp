#include <iostream>
#include <vector>

using namespace std;

void citire(vector<int>& v)
{
    int n, temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
}

void insertionSort(vector<int>& v)
{
    for (int i = 1; i < v.size(); i++)
    {
        int key = v.at(i);
        int j = i - 1;
        while (j >= 0 && v.at(j) > key)
        {
            v.at(j + 1) = v.at(j);
            j -= 1;
        }
        v.at(j + 1) = key;
    }
}

void afisare(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
        cout << v.at(i) << " ";
}

int main()
{
    vector<int> v;
    citire(v);
    insertionSort(v);
    afisare(v);
    return 0;
}