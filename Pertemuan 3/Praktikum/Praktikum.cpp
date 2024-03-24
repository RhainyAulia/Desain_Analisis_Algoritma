#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
	private:
		string nama;
		int npm;
		
	public:
		void setNama(string n){
			this->nama = n;
		}
		
		void setnpm (int no){
			this->npm = no;
		}
		
		string getNama(){
			return nama;
		}
		
		int getnpm(){
			return npm;
		}
};

int main (){
	Mahasiswa siswa;
	string n;
	int no;
	
	cout << "Masukkan Nama Mahasiswa: ";
	getline (cin, n);
	
	siswa.setNama(n);
	
	cout << "Masukkan NPM Mahasiswa: ";
	cin >> no;
	
	siswa.setnpm(no);
	
	cout << "\nData Mahasiswa:" << endl;
	
	cout << "Nama: " << siswa.getNama()<< endl;
	cout << "NPM: " << siswa.getnpm() << endl;
	
	return 0;
}
