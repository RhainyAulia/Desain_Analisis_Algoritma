#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
private:
    string status;
    string nama;
    int umur;
    string jurusan;
    string fakultas;

public:
    virtual void input(int n) {
    	cout << endl << "Mahasiswa " << n+1 << endl;
    	
        cout << "Masukkan Status Mahasiswa (Alumni/Aktif): ";
        getline(cin, status);
        
        cout << "Masukkan Nama Mahasiswa: ";
        getline(cin, nama);

        cout << "Masukkan Umur Mahasiswa: ";
        cin >> umur;
        cin.ignore();
        
        cout << "Masukkan Jurusan Mahasiswa: ";
        getline(cin, jurusan);
        
        cout << "Masukkan Fakultas Mahasiswa: ";
        getline(cin, fakultas);
    }

    virtual void print(int n) {
    	cout << endl << "Data Ke-" << n+1 << endl;
        cout << "Status Mahasiswa: " << status << endl;
        cout << "Nama Mahasiswa: " << nama << endl;
        cout << "Umur Mahasiswa: " << umur << endl;
        cout << "Jurusan Mahasiswa: " << jurusan << endl;
        cout << "Fakultas Mahasiswa: " << fakultas << endl;
    }
};

int main() {
    int n;

    cout << "Masukkan jumlah data mahasiswa: ";
    cin >> n;
    cin.ignore();

    Mahasiswa *mhs[n];

    for (int i = 0; i < n; ++i) {
        mhs[i] = new Mahasiswa();

        mhs[i]->input(i);
    }

    for (int i = 0; i < n; ++i) {
        mhs[i]->print(i);
        cout << endl;
    }

	for (int i = 0; i < n; ++i) {
	    delete mhs[i];
	}

    return 0;
}

