#include <iostream>
#include <vector>

using namespace std;

void CountingSort(vector<int>& Vec, int N) {
    int MinVal = Vec[0], MaxVal = Vec[1];
    for (int Elem : Vec) {
        MinVal = min(MinVal, Elem);
        MaxVal = max(MaxVal, Elem);
    }

    int IntervalSize = MaxVal - MinVal + 1;
    vector<int> Count(IntervalSize, 0);
    for (int Elem : Vec)
        Count[Elem - MinVal]++;

    vector<int> RedundantVec(IntervalSize);
    RedundantVec[0] = Count[0]-1;
    for (int i = 1; i < IntervalSize; i++) {
        RedundantVec[i] = RedundantVec[i - 1] + Count[i];
    }

    vector<int> RedundantVec2(N);
    for (int Elem : Vec) {
        RedundantVec2[RedundantVec[Elem-MinVal]] = Elem;
        RedundantVec[Elem - MinVal]--;
    }

    for (int i = 0; i < N; i++)
        Vec[i] = RedundantVec2[i];
}

int main()
{
    int N;
    cin >> N;
    vector<int> Vec(N);

    for (int i = 0; i < N; i++)
        cin >> Vec[i];

    CountingSort(Vec, N);

    for (int i = 0; i < N; i++)
        cout << Vec[i] << " ";
    return 0;
}

