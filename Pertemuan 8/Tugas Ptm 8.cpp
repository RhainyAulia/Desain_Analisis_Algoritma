#include <iostream>
#include <string>

using namespace std;

class Node {
public:
    string nama;
    string pesanan;
    Node* next;

    Node(const string& nama_pelanggan, const string& pesanan_pelanggan)
        : nama(nama_pelanggan), pesanan(pesanan_pelanggan), next(nullptr) {}
};

class LoketTiket {
private:
    Node* front;
    Node* rear;
    int jumlah;

public:
    LoketTiket() {
        front = nullptr;
        rear = nullptr;
        jumlah = 0;
    }

    void tambahPelanggan(const string& nama, const string& pesanan) {
        Node* newNode = new Node(nama, pesanan);
        if (rear == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        jumlah++;
        cout << "Pelanggan " << nama << " dengan pesanan " << pesanan << " telah ditambahkan ke antrian." << endl;
    }

    void layaniPelanggan() {
        if (front == nullptr) {
            cout << "Tidak ada pelanggan dalam antrian." << endl;
        } else {
            Node* temp = front;
            front = front->next;
            if (front == nullptr) {
                rear = nullptr;
            }
            cout << "Melayani pelanggan: " << temp->nama << " dengan pesanan " << temp->pesanan << endl;
            delete temp;
            jumlah--;
        }
    }

    void tampilkanJumlahPelanggan() {
        cout << "Jumlah pelanggan dalam antrian: " << jumlah << endl;
    }

    void tampilkanAntrian() {
        if (front == nullptr) {
            cout << "Tidak ada pelanggan dalam antrian." << endl;
        } else {
            Node* temp = front;
            cout << "Pelanggan dalam antrian: \n";
            while (temp != nullptr) {
                cout << "Nama: " << temp->nama << ", Pesanan: " << temp->pesanan << "\n";
                temp = temp->next;
            }
            cout << endl;
        }
    }
};

int main() {
    LoketTiket loket;
    int pilihan = 0;
    string nama, pesanan;

    while (pilihan != 5) {
        cout << "\n=== Menu Antrian Loket Tiket Restoran ===\n";
        cout << "1. Tambah Pelanggan ke Antrian\n";
        cout << "2. Layani Pelanggan\n";
        cout << "3. Tampilkan Jumlah Pelanggan\n";
        cout << "4. Tampilkan Semua Pelanggan dalam Antrian\n";
        cout << "5. Keluar\n";
        cout << "Pilih opsi: ";
        cin >> pilihan;

        if (pilihan == 1) {
            cout << "Masukkan nama pelanggan: ";
            cin >> nama;
            cout << "Masukkan pesanan: ";
            cin.ignore();
            getline(cin, pesanan);
            loket.tambahPelanggan(nama, pesanan);
        } else if (pilihan == 2) {
            loket.layaniPelanggan();
        } else if (pilihan == 3) {
            loket.tampilkanJumlahPelanggan();
        } else if (pilihan == 4) {
            loket.tampilkanAntrian();
        } else if (pilihan == 5) {
            cout << "Keluar dari program." << endl;
        } else {
            cout << "Pilihan tidak valid. Coba lagi." << endl;
        }
    }

    return 0;
}

