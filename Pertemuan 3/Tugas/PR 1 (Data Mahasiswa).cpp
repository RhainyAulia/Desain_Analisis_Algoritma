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
	int no, jml;
	string n;
	
	cout << "Banyak data yang ingin di input : ";
	cin >> jml;
	
	cin.ignore();
	
	cout << "Menginput " << jml << " data..." << endl << endl;
	Mahasiswa *siswa = new Mahasiswa[jml];
	
	for (int i=0; i < jml; i++){
		cout << "Masukkan Nama Mahasiswa " << i+1 << " : ";
		getline (cin, n);
	
		siswa[i].setNama(n);
	
		cout << "Masukkan NPM Mahasiswa " << i+1 << " : ";
		cin >> no;
		
		cin.ignore();
	
		siswa[i].setnpm(no);
	}
	
	cout << "\nData Mahasiswa:" << endl << endl;
	for(int i = 0; i < jml; i++){
	
	cout << "Mahasiswa " << i+1 << " :" << endl;
	cout << "Nama : " << siswa[i].getNama()<< endl;
	cout << "NPM : " << siswa[i].getnpm() << endl << endl;
	}
	return 0;
}
