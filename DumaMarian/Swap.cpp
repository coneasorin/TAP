#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, temp;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
    for (int i = 0; i < v.size() - 1; i++)
        for (int j = i + 1; j < v.size(); j++)
            if (v.at(i) > v.at(j))
                swap(v.at(i), v.at(j));
    for (int i = 0; i < n; i++)
        cout << v.at(i) << " ";
    return 0;
}
