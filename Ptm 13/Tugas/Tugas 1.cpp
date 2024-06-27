//double hashing sederhana

#include <iostream>
using namespace std;

class DoubleHashing {
    int size;
    int* table;

public:
    DoubleHashing(int tableSize) : size(tableSize) {
        table = new int[size];
        for (int i = 0; i < size; i++) {
            table[i] = -1;
        }
    }

    int primaryHash(int key) {
        return key % size;
    }

    int secondaryHash(int key) {
        return 7 - (key % 7);
    }

    void insert(int key) {
        int index = primaryHash(key);
        int step = secondaryHash(key);

        while (table[index] != -1) {
            index = (index + step) % size;
        }

        table[index] = key;
    }

    void display() {
        for (int i = 0; i < size; i++) {
            if (table[i] != -1) {
                cout << i << " --> " << table[i] << endl;
            } else {
                cout << i << " --> " << endl;
            }
        }
    }
};

int main() {
    int tableSize;
    cout << "Double Hashing" << endl;
    cout << "Masukkan Ukuran HashTable: ";
    cin >> tableSize;

    DoubleHashing hashTable(tableSize);

    int n;
    cout << "Masukan jumlah elemen: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int key;
        cout << "Masukkan elemen " << i + 1 << ": ";
        cin >> key;
        hashTable.insert(key);
    }

    cout << "Isi Hash Table:" << endl;
    hashTable.display();

    return 0;
}

