#include <iostream>

using namespace std;

int main()
{
    int n, v[100];
	cout << "n = ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Element " << i << ": ";
		cin >> v[i];
	}
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++) {
			if (v[i] > v[j]) {
				int temp = v[i];
				v[i] = v[j];
				v[j] = temp;
			}
		}
	for (int i = 0; i < n; i++)
		cout << v[i] << ' ';
}