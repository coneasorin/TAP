#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int cautareBinara(const vector<int>& vec, int element) {
    int stanga = 0;
    int dreapta = vec.size() - 1;

    while (stanga <= dreapta) {
        int mijloc = stanga + (dreapta - stanga) / 2;

        if (vec[mijloc] == element) {
            return mijloc;
        }

        if (vec[mijloc] > element) {
            dreapta = mijloc - 1;
        }
        else {
            stanga = mijloc + 1;
        }
    }

    return -1;
}

int main() {
    vector<int> vec = { 1, 3, 5, 7, 9, 11, 13, 15 };

    sort(vec.begin(), vec.end());

    int element = 7;
    int rezultat = cautareBinara(vec, element);

    if (rezultat != -1) {
        cout << "Elementul " << element << " a fost gasit la indexul: " << rezultat << endl;
    }
    else {
        cout << "Elementul " << element << " nu a fost gasit." << endl;
    }

    return 0;
}
