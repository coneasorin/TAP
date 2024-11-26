#include <iostream>
#include <vector>

using namespace std;

/*
7
1 3 2 7 5 4 9
*/

int N;
vector<int> V;
vector<int> Aux;

void Merge(int Lo, int Mid, int Hi) {
    int i = Lo, j = Mid + 1, k = 0;

    while (i <= Mid && j <= Hi) {
        if (V[i] < V[j])
            Aux[k++] = V[i++];
        else
            Aux[k++] = V[j++];
    }

    for (; i <= Mid; i++)
        Aux[k++] = V[i];
    for (; j <= Hi; j++)
        Aux[k++] = V[j];

    for (i = Lo; i <= Hi; i++) {
        V[i] = Aux[i - Lo];
    }
}

void MergeSort(int Lo, int Hi) {
    if (Lo >= Hi)
        return;

    int Mid = (Lo + Hi) / 2;
    MergeSort(Lo, Mid);
    MergeSort(Mid + 1, Hi);
    Merge(Lo, Mid, Hi);
}

void SortareInterschimbari() {
    for (int i = 1; i < N; i++) {
        int j = i;
        while (j > 0 && V[j] < V[j - 1]) {
            swap(V[j], V[j - 1]);
            j--;
        }
    }
}

int main()
{
    cin >> N;
    V = vector<int>(N);
    Aux = vector<int>(N);
    for (int i = 0; i < N; i++) {
        cin >> V[i];
    }

    MergeSort(0, N - 1);

    for (int i = 0; i < N; i++)
        cout << V[i] << " ";
}
