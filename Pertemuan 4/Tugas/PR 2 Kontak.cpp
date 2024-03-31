#include <iostream>
#include <string>

using namespace std;

class info {
private:
    string nama;
    int nomor_kontak;

public:
    info() {}

    info(string nama, int nomor_kontak) : nama(nama), nomor_kontak(nomor_kontak) {
        
    }

    void data() {
        cout << "Nama Kontak: " << nama << endl << "Nomor Kontak: " << nomor_kontak << endl;
    }
};

int main() {
    const int jumlah_kontak = 10;
    string nama;
    int nomor_kontak; 
    char pilihan = 'y';

    info daftar_kontak[jumlah_kontak];
    int jumlah = 0;
    
    cout << "Maksimal Kontak = 10" << endl;
    
    for (int i = 0; i < jumlah_kontak && pilihan == 'y'; ++i) {
        cout << "Masukkan data kontak ke-" << i + 1 << ":" << endl;

        cout << "Masukkan Nama Kontak: ";
        getline(cin, nama);

        cout << "Masukkan Nomor Kontak: ";
        cin >> nomor_kontak;
        cin.ignore(); 

        daftar_kontak[i] = info(nama, nomor_kontak);
        jumlah++;
		
		cout << "Kontak berhasil ditambahkan." << endl;
		
        if (i < jumlah_kontak - 1) {
            cout << "Apakah Anda ingin memasukkan data kontak lagi? (y/n): ";
            cin >> pilihan;
            cin.ignore(); 
            if (pilihan != 'y' && pilihan != 'n') {
                cout << "Pilihan tidak valid. Silakan masukkan 'y' untuk Ya atau 'n' untuk Tidak." << endl;
                break;
            }
        } else {
            cout << "Jumlah maksimum kontak telah tercapai." << endl;
        }
        
    }

    cout << "\n\nData seluruh kontak:\n";
    for (int i = 0; i < jumlah; ++i) {
        cout << "Data kontak ke-" << i + 1 << ":" << endl;
        daftar_kontak[i].data();
        cout << "-----------------" << endl;
    }

    return 0;
}

