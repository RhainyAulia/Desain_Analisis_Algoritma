#include <iostream> 
using namespace std; 

class contoh { // declare class
	private: // private dari class
		int nilai; // declare int nilai
	public: // public dari kelas
		contoh(int n){ // fungsi dengan parameter integer n yang akan dipanggil stiap kelas dipakai
			nilai = n; // declare nilai = n
		}
		
		int getNum(){ // fungsi untuk mengembalikan nilai
			return nilai; // mengembalikan nilai dari variabel nilai
		}
};

int main(){ // fungsi utama program
	contoh obj(10); // Membuat objek bernama obj dari kelas contoh dengan nilai awal 10
	cout << "nilai yang diinput: " << obj.getNum() << endl; // Mencetak nilai yang diset pada obj menggunakan fungsi getNum
	return 0; // Mengembalikan nilai 0, menandakan bahwa program berakhir tanpa masalah
}

/*program diatas adalah contoh penerapan constructor (baris 8)
 dimana fungsi contoh menginisialisasi nilai dari objek yang dibuat
 dengan nilai yang diberikan (baris 18) */
