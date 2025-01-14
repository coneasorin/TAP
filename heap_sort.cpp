#include <iostream>

using namespace std;

#define LEFT_CHILD node*2+1
#define RIGHT_CHILD node*2+2

/*
11
5 9 12 20 2 15 6 -3 0 8 1 
*/

void heap_sift(int* vec, int node, int n) {
    if (LEFT_CHILD >= n) // leaf node
        return; 

    if (vec[LEFT_CHILD] > vec[node]) {
        if (RIGHT_CHILD < n && vec[RIGHT_CHILD] > vec[LEFT_CHILD]) {
            swap(vec[node], vec[RIGHT_CHILD]);
            heap_sift(vec, RIGHT_CHILD, n);
        }
        else {
            swap(vec[node], vec[LEFT_CHILD]);
            heap_sift(vec, LEFT_CHILD, n);
        }
    }
    else if (RIGHT_CHILD < n && vec[RIGHT_CHILD] > vec[node]) {
        swap(vec[node], vec[RIGHT_CHILD]);
        heap_sift(vec, RIGHT_CHILD, n);
    }
}

void heapsort(int* vec, int n) {
    for (int i = n - 1; i >= 0; i--)
        heap_sift(vec, i, n);

    for (int i = n - 1; i > 0; i--) {
        swap(vec[i], vec[0]);
        heap_sift(vec, 0, i);
    }
}

int main()
{
    int n;
    cin >> n;

    int* vec = (int*)malloc(n * sizeof(int));
    if (!vec) return 0;
    for (int i = 0; i < n; i++)
        cin >> vec[i];

    heapsort(vec, n);

    for (int i = 0; i < n; i++)
        cout << vec[i] << " ";

    free(vec);
    return 0;
}
