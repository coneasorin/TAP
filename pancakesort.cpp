#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <typename T>
void Flip(vector<T>& list, int num) {
    int start = 0;
    num--;
    while (start < num) {
        swap(list[start], list[num]);
        start++;
        num--;
    }
}

template <typename T>
void PancakeSort(vector<T>& list) {
    if (list.size() < 2) {
        return;
    }

    int i, a, max_num_pos;
    for (i = list.size(); i > 1; i--) {
        max_num_pos = 0;
        for (a = 0; a < i; a++) {
            if (list[a] > list[max_num_pos]) {
                max_num_pos = a;
            }
        }
        if (max_num_pos == i - 1) {
            continue;
        }
        if (max_num_pos > 0) {
            Flip(list, max_num_pos + 1);
        }
        Flip(list, i);
    }
}

int main() {
    int len;
    cout << "Introdu numarul de elemente ";
    cin >> len;

    vector<int> list(len);
    cout << "Introdu valorile" << endl;
    for (int i = 0; i < len; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> list[i];
    }

    PancakeSort(list);

    cout << "Vector sortat ";
    for (int value : list) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
