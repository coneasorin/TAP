#include <iostream>

using namespace std;

int temp[202];
	
void mergeSort(int a[], int st, int dr)
{
	if (st < dr)
	{
		int mijloc = (st + dr) / 2;
		mergeSort(a, st, mijloc);
		mergeSort(a, mijloc + 1, dr);
		int i = st, j = mijloc + 1, k = 0;
		while (i <= mijloc && j <= dr)
		{
			if (a[i] < a[j])
				temp[++k] = a[i++];
			else
				temp[++k] = a[j++];
		}
		while (i <= mijloc)
			temp[++k] = a[i++];
		while (j <= dr)
			temp[++k] = a[j++];
		for (i = st, j = 1; i <= dr; i++, j++)
			a[i] = temp[j];
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
	dr = n-1;
	mergeSort(a, st, dr);
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	return 0;
}