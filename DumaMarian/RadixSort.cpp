#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void countSort(int v[], int n, int exp);
void radixSort(int v[], int n);
void afisare(int v[], int n);

int main()
{
	int v[] = { 321, 93, 2, 49, 309, 943, 5, 498 };
	int n = sizeof(v) / sizeof(v[0]);
	radixSort(v, n);
	afisare(v, n);
	return 0;
}

void countSort(int v[], int n, int exp)
{
	vector<int> output(n);
	int i, count[10] = { 0 };
	for (i = 0; i < n; i++)
		count[(v[i] / exp) % 10]++;
	for (i = 1; i < 10; i++)
		count[i] += count[i - 1];
	for (i = n - 1; i >= 0; i--)
	{
		output[count[(v[i] / exp) % 10] - 1] = v[i];
		count[(v[i] / exp) % 10]--;
	}
	for (i = 0; i < n; i++)
		v[i] = output[i];
}

void radixSort(int v[], int n)
{
	int m = *max_element(v, v + n);
	for (int exp = 1; m / exp > 0; exp *= 10)
		countSort(v, n, exp);
}

void afisare(int v[], int n)
{
	for (int i = 0; i < n; i++)
		cout << v[i] << " ";
}