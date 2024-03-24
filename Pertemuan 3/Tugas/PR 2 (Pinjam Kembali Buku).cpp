#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int MAX_BUKU = 3;

class Perpustakaan {
	private:
		string nama;
		string buku[MAX_BUKU];
		bool dipinjam[MAX_BUKU];
		
	public:
		Perpustakaan() {
			for (int i = 0; i < MAX_BUKU; ++i) {
				dipinjam[i] = false;
			}
		}
		
		void setNama(string n){
			this->nama = n;
		}
		
		void pinjamBuku(string b) {
			for (int i = 0; i < MAX_BUKU; ++i) {
				if (!dipinjam[i]) {
					buku[i] = b;
					dipinjam[i] = true;
					cout << "Anda telah meminjam buku dengan judul: " << buku[i] << endl;
					return;
				}
			}
			cout << "Maaf, semua slot buku sudah terisi." << endl;
		}
		
		void kembalikanBuku(string b) {
			for (int i = 0; i < MAX_BUKU; ++i) {
				if (buku[i] == b && dipinjam[i]) {
					dipinjam[i] = false;
					cout << "Anda telah mengembalikan buku dengan judul: " << buku[i] << endl;
					return;
				}
			}
			cout << "Buku tidak terdaftar sebagai buku yang Anda pinjam." << endl;
		}
		
		string getNama(){
			return nama;
		}
};

int main(){
	Perpustakaan data;
	string nama, judulBuku;
	int pil;
	char ulangi;
	
	cout << setw(65) << "==== PROGRAM PINJAM BUKU UNTUK PELAJAR ====" << endl;
	
	cout << endl << "Masukkan Nama : ";
	getline(cin, nama);
	data.setNama(nama);
	
	cout << "Selamat datang " << data.getNama() << "!" << endl;

	while (true) {
		cout << "1. Pinjam Buku" << endl
			 << "2. Kembalikan Buku" << endl
			 << "3. Exit" << endl
			 << "Pilih : ";
		cin >> pil;
		cin.ignore();
		
		if (pil == 1){
			cout << "Masukkan judul buku yang ingin dipinjam: ";
			getline(cin, judulBuku);
			data.pinjamBuku(judulBuku);
		}
		else if (pil == 2) {
			cout << "Masukkan judul buku yang ingin dikembalikan: ";
			getline(cin, judulBuku);
			data.kembalikanBuku(judulBuku);	
		}
		else if (pil == 3) {
			cout << "Program Selesai";
			return 0;
		}
		else {
			cout << "Pilihan tidak valid." << endl;
		}
	}

	return 0;
}

