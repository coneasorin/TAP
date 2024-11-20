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

void selectionSort(vector<int>& v)
{
    for (int i = 0; i < v.size() - 1; i++)
    {
        int minim = v.at(i);
        int pozitie = 0;
        for (int j = i + 1; j < v.size(); j++) {
            if (minim > v.at(j))
            {
                minim = v.at(j);
                pozitie = j;
            }
        }
        if (pozitie)
            swap(v.at(i), v.at(pozitie));
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
    selectionSort(v);
    afisare(v);
    return 0;
}

