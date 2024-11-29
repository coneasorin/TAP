#include <iostream>

using namespace std;

void flip(int v[], int i);
int findMax(int v[], int n);
void flippingSort(int *v, int n);
void afisare(int v[], int n);

int main()
{
	int v[] = { 42, 13, 34, 93, 37, 3, 6, 84, 18, 49 };
	int n = sizeof(v) / sizeof(v[0]);
	flippingSort(v, n);
	afisare(v, n);
	return 0;
}

void flip(int v[], int i)
{
	int start = 0;
	while (start < i)
	{
		swap(v[i], v[start]);
		start++;
		i--;
	}
}

int findMax(int v[], int n)
{
	int mi, i;
	for (mi = 0, i = 0; i < n; ++i)
		if (v[i] > v[mi])
			mi = i;
	return mi;
}

void flippingSort(int *v, int n)
{
	for (int i = n; i > 1; --i)
	{
		int m = findMax(v, i);
		if (m != i - 1)
		{
			flip(v, m);
			flip(v, i - 1);
		}
	}
}

void afisare(int v[], int n)
{
	for (int i = 0; i < n; i++)
		cout << v[i] << " ";
}