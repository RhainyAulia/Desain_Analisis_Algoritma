#include <iostream>
#include <string>
#include <algorithm> // pakai library template dari c++
using namespace std;

int main() {
    string judul, bukubuku[100];
    int jumlahbuku = 0;

    cout << "Masukkan Judul Buku (Ketik 'stop' Untuk BERHENTI):\n";
    while (true) {
        cout << ">> ";
        getline(cin, judul);
        if (judul == "stop" || jumlahbuku >= 100)
            break;
        bukubuku[jumlahbuku++] = judul;
    }

    sort(bukubuku, bukubuku + jumlahbuku); //library template

    cout << "\nJudul Buku Setelah Diurutkan:\n";
    for (int i = 0; i < jumlahbuku; ++i)
        cout << bukubuku[i] << endl;

    return 0;
}

