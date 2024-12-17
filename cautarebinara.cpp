#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

int cautareBinara(const vector<int>& arr, int cautat) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == cautat) {
            return mid;
        }
        else if (arr[mid] < cautat) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    ifstream fisier("C:\\Users\\iceda\\Desktop\\INFO\\fisier.txt");
    if (!fisier.is_open()) {
        cout << "Fisierul nu a putut fi deschis!" << endl;
        return 1;
    }

    string linie;
    getline(fisier, linie); 
    stringstream ss(linie);
    vector<int> sir;
    int numar;
    while (ss >> numar) {
        sir.push_back(numar);
    }

    fisier.close();

    int cautat;
    cout << "Introduceti numarul cautat: ";
    cin >> cautat;

    int rezultat = cautareBinara(sir, cautat);
    if (rezultat != -1) {
        cout << "Elementul " << cautat << " a fost gasit la indexul " << rezultat + 1 << "." << endl;
    }
    else {
        cout << "Elementul " << cautat << " nu a fost gasit." << endl;
    }

    return 0;
}
