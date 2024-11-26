#include <iostream>
using namespace std;

int main()
{
	int a[50], b[50] = { 0 }, c[50], n, i, j;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> a[i];

	for (i = 0; i < n; i++)
		c[i] = a[i];

	for (i = 0; i < n; i++)
		for (j = i + 1; j < n; j++)
			if (a[i] < a[j])
				b[j]++;
			else
				b[i]++;
	for (i = 0; i < n; i++)
		a[b[i]] = c[i];

	for (i = 0; i < n; i++)
		cout << a[i] << " ";
	return 0;
}

