#include <iostream>
#include <vector>

using namespace std;

int cautareSecventiala(const vector<int>& vec, int element) {
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == element) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> vec = { 1, 3, 5, 7, 9, 11, 13, 15 };
    int element = 7;
    int rezultat = cautareSecventiala(vec, element);

    if (rezultat != -1) {
        cout << "Elementul " << element << " a fost gasit la indexul: " << rezultat << endl;
    }
    else {
        cout << "Elementul " << element << " nu a fost gasit." << endl;
    }

    return 0;
}
