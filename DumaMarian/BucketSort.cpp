#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<float>& bucket);
void bucketSort(float v[], int n);
void afisare(float v[], int n);

int main()
{
	float v[] = {0.429, 0.394, 0.374, 0.294, 0.9482, 0.94, 
			   0.456, 0.123 };
	int n = sizeof(v) / sizeof(v[0]);
	bucketSort(v, n);
	afisare(v, n);
	return 0;
}

void insertionSort(vector<float>& bucket)
{
	for (int i = 1; i < bucket.size(); i++)
	{
		float key = bucket.at(i);
		int j = i - 1;
		while (j >= 0 && bucket.at(j) > key)
		{
			bucket.at(j + 1) = bucket.at(j);
			j--;
		}
		bucket.at(j + 1) = key;
	}
}

void bucketSort(float v[], int n)
{
	vector<std::vector<float>> b(n);
	for (int i = 0; i < n; i++)
	{
		int bi = n * v[i];
		b[bi].push_back(v[i]);
	}
	for (int i = 0; i < n; i++)
		insertionSort(b[i]);
	int index = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < b[i].size(); j++)
			v[index++] = b[i][j];
}

void afisare(float v[], int n)
{
	for (int i = 0; i < n; i++)
		cout << v[i] << " ";
}