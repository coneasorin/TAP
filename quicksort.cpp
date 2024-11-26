#include <iostream>
#include <vector>

using namespace std;

int N;
vector<int>V;

int GetPivotPos(int Low, int High) {
    int Pivot = High;

    vector<int> Left;
    vector<int> Right;
    for (int i = Low; i < High; i++) {
        if (V[i] < V[Pivot])
            Left.push_back(V[i]);
        else
            Right.push_back(V[i]);
    }

    int k = Low;
    for (int i = 0; i < Left.size(); i++) {
        V[k++] = Left[i];
    }

    int PivotPos = k;
    V[k++] = V[Pivot];

    for (int i = 0; i < Right.size(); i++) {
        V[k++] = Right[i];
    }

    return PivotPos;
}

void QuickSort(int Low, int High) {
    if (Low > High)
        return;

    int Pivot = GetPivotPos(Low, High);
    QuickSort(Low, Pivot - 1);
    QuickSort(Pivot + 1, High);
}

void SelectionSort() {
    for (int i = 0; i < N; i++) {
        int Min = i;
        for (int j = i + 1; j < N; j++) {
            if (V[j] < V[Min])
                Min = j;
        }

        swap(V[i], V[Min]);
    }
}

int main()
{   
    cin >> N;
    V = vector<int>(N);
    for (int i = 0; i < N; i++)
        cin >> V[i];

    QuickSort(0, N-1);

    for (int i = 0; i < N; i++)
        cout << V[i] << " ";
    return 0;
}
