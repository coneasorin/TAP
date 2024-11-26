#include <iostream>
#include <vector>

using namespace std;

void SelectionSort(vector<int>& v, int n) {
    int i = 0;
    while (i<n) {
        int Min = i;
        for (int j = i + 1; j < n; j++) {
            if (v[j] < v[Min])
                Min = j;
        }
        swap(v[i], v[Min]);
        i++;
    }
}

void BubbleSort(vector<int>& v, int n) {
    for (bool sorted = false; !sorted;) {
        sorted = true;
        for (int i = 0; i < n - 1; i++) {
            if (v[i] > v[i + 1]) {
                sorted = false;
                swap(v[i], v[i + 1]);
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    BubbleSort(v, n);

    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << "\n";
}
