#include <iostream>

using namespace std;

void merge_sort(int v[], int p, int u) {
    int i, j, mijl, w[100], k = 0;
    if (p < u)
    {
        mijl = (p + u) / 2;
        merge_sort(v, p, mijl);
        merge_sort(v, mijl + 1, u);
        i = p;
        j = mijl + 1;
        while (i <= mijl && j <= u) {
            if (v[i] < v[j]) {
                w[k] = v[i];
                i++;
                k++;
            }
            else {
                w[k] = v[j];
                j++;
                k++;
            }
        }
        while (i <= mijl) {
            w[k] = v[i];
            i++;
            k++;
        }
        while (j <= u) {
            w[k] = v[j];
            j++;
            k++;
        }


        for (i = p, k = 0; i <= u; i++, k++)
            v[i] = w[k];

    }


}


void row_cin(int v[], int& n) {

    int i;
    cout << " Enter the size of the vector: ";
    cin >> n;

    for (i = 0; i < n; i++) {
        cout << "v[" << i << "]=";
        cin >> v[i];
    }

}

void row_cout (int v[], int n) {
    int i;
    for (i = 0; i < n; i++)
        cout << v[i] << " ";

}


int main()
{
    int v[100], n;
    row_cin(v, n);
    merge_sort(v, 0, n - 1);
    row_cout(v, n);

    return 0;
}



