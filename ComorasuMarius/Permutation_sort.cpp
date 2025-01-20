#include <iostream>

using namespace std;

void permutation(int v[], int n)
{
    int aux;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] > v[j])
            {

                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}

int main()
{
    int n, v[100];
    cout << "Lungime vector:" << endl;
    cin >> n;
    cout << "Elemente: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    permutation(v, n);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}