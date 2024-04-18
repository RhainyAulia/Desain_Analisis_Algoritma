#include <iostream>
#include <string>
using namespace std;

//class induk
class BangunDatar {
    protected:
        int lebar, tinggi;
        
    public:
        void setValue(int a, int b) {
            lebar = a;
            tinggi = b;
        }
};

//class turunan
class PersegiPanjang: public BangunDatar {
    public:
        int getValue() {
            return (lebar * tinggi);
        }
};

//class turunan
class Segitiga: public BangunDatar {
    public:
        int getValue() {
            return (lebar * tinggi / 2);
        }
};

//class turunan
class Persegi: public BangunDatar {
    public:
        int getVLebar() {
            return (lebar * lebar);
        }
        int getVPanjang() {
            return (tinggi * tinggi);
        }
        
        // Setter untuk lebar dan tinggi persegi
        void setValues(int a, int b) {
            lebar = a;
            tinggi = b;
        }
};

int main() {
    PersegiPanjang ppanjang;
    Segitiga sgitiga;
    Persegi kotak;
    int ppp, lpp, as, ts;
    
    cout << "Masukkan panjang persegi panjang: ";
    cin >> ppp;
    cout << "Masukkan lebar persegi panjang: ";
    cin >> lpp;
    cout << "Masukkan alas segitiga: ";
    cin >> as;
    cout << "Masukkan tinggi segitiga: ";
    cin >> ts;
     
    ppanjang.setValue(lpp, ppp);
    sgitiga.setValue(as, ts);
    kotak.setValues(lpp, ppp); 

    cout << endl << "Luas persegi panjang: " << ppanjang.getValue() << endl;
    cout << "Luas segitiga: " << sgitiga.getValue() << endl;
    cout << "Luas persegi (berdasarkan lebar): " << kotak.getVLebar() << endl;
    cout << "Luas persegi (berdasarkan panjang): " << kotak.getVPanjang() << endl;

    return 0;
}

