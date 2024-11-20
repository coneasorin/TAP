#include <iostream>
#include <vector>

using namespace std;

void citireVector(vector<int> &v, int &mini, int &maxi)
{
	int n, temporar;
	cin >> n;
	cin >> temporar;
	v.push_back(temporar);
	maxi = temporar;
	mini = temporar;
	for (int i = 1; i < n; i++) 
	{
		cin >> temporar;
		v.push_back(temporar);
		if (maxi < temporar)
			maxi = temporar;
		if (mini > temporar)
			mini = temporar;
	}
}

void countingSort(vector<int>& v, int mini, int maxi)
{
	int x = maxi;
	int vf[] = { 0 };
	for (int i = 0; i < v.size(); i++)
	{
		vf[v.at(i)]++;
	}
}

int main()
{
	vector<int> v;
	int mini = 0;
	int maxi = 0;
	citireVector(v, mini, maxi);
	countingSort(v, mini, maxi);

	return 0;
}