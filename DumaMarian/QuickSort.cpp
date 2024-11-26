#include <iostream>

using namespace std;

void QuickSort(int a[], int st, int dr)
{
	if (st < dr)
	{
		int mijloc = (st + dr) / 2;
		int aux = a[st];
		a[st] = a[mijloc];
		a[mijloc] = aux;
		int i = st, j = dr, k = 0;
		while (i < j)
		{
			if (a[i] > a[j])
			{
				swap(a[i], a[j]);
				k = 1 - k;
			}
			i += k;
			j -= 1 - k;
		}
		QuickSort(a, st, i - 1);
		QuickSort(a, i + 1, dr);
	}
}

int main()
{
	int n, a[101];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int st, dr;
	st = 0;
	dr = n - 1;
	QuickSort(a, st, dr);
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	return 0;
}