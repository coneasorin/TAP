#include <iostream>
#include <vector>

using namespace std;

struct Nod {
    int valoare;
    Nod* stanga;
    Nod* dreapta;
    Nod(int val) {
        valoare = val;
        stanga = nullptr;
        dreapta = nullptr;
    }
};

Nod* Insereaza(Nod* radacina, int valoare) 
{
    if (radacina == nullptr) {
        return new Nod(valoare);
    }
    if (valoare < radacina->valoare) {
        radacina->stanga = Insereaza(radacina->stanga, valoare);
    }
    else {
        radacina->dreapta = Insereaza(radacina->dreapta, valoare);
    }
    return radacina;
}

void InOrdine(Nod* radacina, vector<int>& sortat) 
{
    if (radacina == nullptr) {
        return;
    }
    InOrdine(radacina->stanga, sortat);
    sortat.push_back(radacina->valoare);
    InOrdine(radacina->dreapta, sortat);
}

vector<int> Sorteaza_BST(const vector<int>& A)
{
    Nod* radacina = nullptr;
    for (int valoare : A) {
        radacina = Insereaza(radacina, valoare);
    }
    vector<int> sortat;
    InOrdine(radacina, sortat);
    return sortat;
}

int main() 
{
    vector<int> A = { 10, 4, 7, 2, 15, 12, 18 };
    vector<int> sortat = Sorteaza_BST(A);
    for (int valoare : sortat) {
        cout << valoare << " ";
    }
    return 0;
}