#include <iostream>
#include <vector>

using namespace std;

void citire(vector<int>& sir)
{
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        sir.push_back(m);
    }
}

void bubbleSort(vector<int>& sir)
{
    bool sortat;
    do {
        sortat = true;
        for (int i = 0; i < sir.size() - 1; i++)
        {
            if (sir.at(i) > sir.at(i + 1))
            {
                swap(sir.at(i), sir.at(i + 1));
                sortat = false;
            }
        }
    } while (!sortat);
}

void afisare(vector<int> sir)
{
    for (int i : sir)
        cout << sir.at(i) << " ";
}

int main()
{
    vector<int> sir;
    citire(sir);
    bubbleSort(sir);
    afisare(sir);
    return 0;
}