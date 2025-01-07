#include <iostream>

using namespace std;

int N;

void Flip(int Left, int Right, int* V) {
    for (int i = Left, j = Right; i <= j; i++, j--)
        swap(V[i], V[j]);
}

void FlippingSort(int* V, int N) {
    for (int i = N - 1; i >= 0; i--) {
        int Max = i;
        for (int j = i - 1; j >= 0; j--)
            if (V[j] >= V[Max])
                Max = j;
        
        if (Max == 0)
            Flip(0, i, V);
        else {
            Flip(0, Max, V);
            Flip(0, i, V);
        }
    }
}

int main()
{
    cin >> N;
    int* Vec = (int*)malloc(N * sizeof(int));
    if (!Vec)
        return 0;

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        Vec[i] = x;
    }

    FlippingSort(Vec, N);
    for (int i = 0; i < N; i++) {
        cout << Vec[i] << " ";
    }

    free(Vec);
}

