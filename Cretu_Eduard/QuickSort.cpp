#include <iostream>

using namespace std;

void QuickSort(int v[], int st, int dr)
{
	if(st < dr)
	{
		int m = (st + dr) / 2;
		int aux = v[st];
		v[st] = v[m];
		v[m] = aux;
		int i = st , j = dr, d = 0;
		while(i < j)
		{
			if(v[i] > v[j])
			{
				swap(v[i],v[j]);
				d = 1 - d;
			}
			i += d;
			j -= 1 - d;
		}
		QuickSort(v, st , i - 1);
		QuickSort(v, i + 1 , dr);
	}
}

int main() {

     int data[] = {8, 7, 6, 1, 0, 9, 2};
    int n = sizeof(data) / sizeof(data[0]);
    QuickSort(data, 0, n-1);

    for(int i = 0; i<n; i++) {

        cout << data[i] << " ";
    }
}