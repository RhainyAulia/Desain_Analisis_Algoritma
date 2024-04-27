	#include <iostream>
#include <string>

using namespace std;

struct Barang {
    string nama;
    int harga;
};

int sequentialSearch(const Barang arr[], int size, const string& key) {
    for (int i = 0; i < size; ++i) {
        if (arr[i].nama == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    Barang daftarBarang[5] = {
        {"Buku", 5000},
        {"Pensil", 1000},
        {"Pulpen", 2000},
        {"Penghapus", 500},
        {"Penggaris", 1500}
    };

    string cari;
    bool ditemukan = false;

    cout << "Masukkan barang yang ingin dicari: ";
    cin >> cari;

    int index = sequentialSearch(daftarBarang, 5, cari);
    if (index != -1) {
        cout << "Barang ditemukan!\n";
        cout << "Nama Barang: " << daftarBarang[index].nama << endl;
        cout << "Harga: " << daftarBarang[index].harga << endl;
        ditemukan = true;
    }

    if (!ditemukan) {
        cout << "Maaf, barang " << cari << " tidak ditemukan.\n";
    }

    return 0;
}

