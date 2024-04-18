#include <iostream>
#include <string>

using namespace std;

class Kendaraan {
protected:
    string merek;
    int tahunProduksi;

public:
    Kendaraan(string _merek, int _tahunProduksi) : merek(_merek), tahunProduksi(_tahunProduksi) {}

    void info() {
        cout << "Merek: " << merek << endl;
        cout << "Tahun Produksi: " << tahunProduksi << endl;
    }
};

class Mobil : public Kendaraan {
private:
    int jumlahPintu;

public:
    Mobil(string _merek, int _tahunProduksi, int _jumlahPintu) : Kendaraan(_merek, _tahunProduksi), jumlahPintu(_jumlahPintu) {}

    void info() {
        Kendaraan::info();
        cout << "Jumlah Pintu : " << jumlahPintu << endl;
    }
};

int main() {
    string merk;
    int thn, pintu;

    cout << "Masukkan merek mobil: ";
    getline(cin, merk);

    cout << "Masukkan tahun produksi mobil: ";
    cin >> thn;

    cout << "Masukkan jumlah pintu mobil: ";
    cin >> pintu;

    Mobil mobil(merk, thn, pintu);
    cout << "\nInformasi Mobil:" << endl;
    mobil.info();

    return 0;
}

