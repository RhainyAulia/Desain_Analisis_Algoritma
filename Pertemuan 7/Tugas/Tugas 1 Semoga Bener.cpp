#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

struct BUKU {
    string rak_buku;
    string judul;
}; 

string binarySearch(BUKU buku[], int uk, string dicari) {
    int low = 0;
    int high = uk - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (buku[mid].judul == dicari) {
            return buku[mid].rak_buku;
        } else if (buku[mid].judul < dicari) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    return "Buku tidak ditemukan";
}

int main() {
    int jumlahBuku;
    cout << "Masukkan jumlah buku: ";
    cin >> jumlahBuku;
    cin.ignore();

    BUKU *perpus = new BUKU[jumlahBuku];

    for (int i = 0; i < jumlahBuku; ++i) {
        cout << "Masukkan judul buku ke-" << i + 1 << ": ";
        getline(cin, perpus[i].judul);
        cout << "Masukkan rak buku untuk \"" << perpus[i].judul << "\": ";
        getline(cin, perpus[i].rak_buku);
    }
	
	//daftar bukunya sudah saya coba pakai hard code (diinput di code), tapi ga kebaca terus :(
	
    sort(perpus, perpus + jumlahBuku, [](const BUKU& a, const BUKU& b) {
        return a.judul < b.judul;
    });

    string inputJudul;
    cout << endl << "SEARCH" << endl << "Masukkan Judul Buku : ";
    getline(cin, inputJudul);
    
    string rak = binarySearch(perpus, jumlahBuku, inputJudul);
    
    cout << "Rak untuk buku \"" << inputJudul <<  "\" adalah : " << rak << endl;
    
    delete[] perpus;
    
    return 0;
}

