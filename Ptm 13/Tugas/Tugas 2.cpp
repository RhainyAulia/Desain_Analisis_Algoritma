#include <iostream>

using namespace std;

int hashFunction(int key, int tableSize) {
    return key % tableSize;
}

void insertElement(int hashTable[], int tableSize, int element) {
    int hashIndex = hashFunction(element, tableSize);

    while (hashTable[hashIndex] != -1) {
        hashIndex = (hashIndex + 1) % tableSize;
    }
    hashTable[hashIndex] = element;
}

bool searchElement(int hashTable[], int tableSize, int element) {
    int hashIndex = hashFunction(element, tableSize);
    int start = hashIndex;

    while (hashTable[hashIndex] != element) {
        hashIndex = (hashIndex + 1) % tableSize;
        if (hashTable[hashIndex] == -1 || hashIndex == start) {
            return false;
        }
    }
    return true;
}

int main() {
    int tableSize;
    cout << "Masukkan ukuran table hash (user input) : ";
    cin >> tableSize;

    int *hashTable = new int[tableSize];
    for (int i = 0; i < tableSize; ++i) {
        hashTable[i] = -1; // initialize table with -1 indicating empty slots
    }

    int numElements;
    cout << "Masukkan jumlah elemen yang akan disisipkan (user input) : ";
    cin >> numElements;

    cout << "Masukkan " << numElements << " elemen : " << endl;
    for (int i = 0; i < numElements; ++i) {
        int element;
        cin >> element;
        insertElement(hashTable, tableSize, element);
    }

    cout << "Isi tabel hash : " << endl;
    for (int i = 0; i < tableSize; ++i) {
        cout << i << " --> " << (hashTable[i] == -1 ? "kosong" : to_string(hashTable[i])) << endl;
    }

    int searchKey;
    cout << "Masukkan elemen yang ingin dicari dalam tabel hash : ";
    cin >> searchKey;

    if (searchElement(hashTable, tableSize, searchKey)) {
        cout << searchKey << " ditemukan dalam tabel hash" << endl;
    } else {
        cout << searchKey << " tidak ditemukan dalam tabel hash" << endl;
    }

    delete[] hashTable;
    return 0;
}

