#include <iostream>
#include <list>
#include <vector>
using namespace std;

class HashTable {
private:
    vector<list<int>> table;
    int size;

public:
    HashTable(int size) {
        this->size = size;
        table.resize(size);
    }

    int hashFunction(int key) {
        return key % size;
    }

    void insert(int key) {
        int index = hashFunction(key);
        table[index].push_back(key);
    }

    bool search(int key) {
        int index = hashFunction(key);
        for (int item : table[index]) {
            if (item == key) {
                return true;
            }
        }
        return false;
    }

    void remove(int key) {
        int index = hashFunction(key);
        table[index].remove(key);
    }
};

int main() {
    HashTable hashTable(10);

    hashTable.insert(15);
    hashTable.insert(25);
    hashTable.insert(35);

    if (hashTable.search(25)) {
        cout << "Elementul 25 a fost gasit." << endl;
    } else {
        cout << "Elementul 25 nu a fost gasit." << endl;
    }

    hashTable.remove(25);

    if (hashTable.search(25)) {
        cout << "Elementul 25 a fost gasit." << endl;
    } else {
        cout << "Elementul 25 nu a fost gasit." << endl;
    }

    return 0;
}
