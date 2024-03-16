#include <iostream>
using namespace std;

int main (){
	
	string judul, batasjudul[100];
	int inputanjudul = 0;
	
	cout << "Masukkan Judul Buku \n (Ketik 'selesai' Untuk BERHENTI ):\n";
    while (true) {
        cout << ">> ";
        getline(cin, judul);
        if (judul == "selesai" || inputanjudul >= 100) {
            break;
        }
        bukubuku[inputanjudul++] = judul;
    }
    
}
