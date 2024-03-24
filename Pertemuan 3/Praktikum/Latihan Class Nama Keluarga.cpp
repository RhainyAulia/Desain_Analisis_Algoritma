#include <iostream>
using namespace std;

class Silsilah {
	protected:
		string orangtua = "Albert Wijaya dan Jenny Lim";
		string anakanak = "Agatha Wijaya dan Jonathan Wijaya";
		
	public:
		string cekSilsilah() {
			//Mengubah teks statis menjadi teks yang mengekstrak nama orang tua dari variabel yang sudah ada
		return "Ayah bernama " + orangtua.substr(0, orangtua.find(" ")) +
				" dan ibu bernama " + orangtua.substr(orangtua.find(" "));
		}
};

class Cucu : public Silsilah {
	protected:
		string cucu = "Wilbert Tan dan Rayanza Wijaya";
		
	public:
		string cekAnak(){
			//Mengubah teks statis menjadi teks yang mengekstrak nama anak-anak dari variabel yang sudah ada
		return "Anak pertama keluarga Wijaya adalah " + anakanak.substr(0, anakanak.find(" "))+
				" dan anak kedua dari keluarga wijaya adalah " +
				anakanak.substr(anakanak.find(" ")+4);
		}
};

class Anak : public Cucu {
	public:
		string lihatSilsilahnya(){
			return "Silsilah Keluarga Wijaya";
		}
		
		string cekCucu(){
			////Mengubah teks statis menjadi teks yang mengekstrak nama cucu dari variabel yang sudah ada
		return "Cucu pertama bernama " + cucu.substr(0, cucu.find(" "))+
				" dan Cucu kedua bernama" + cucu.substr(cucu.find(" ")+4);
		}
};

int main (){
	Anak silsilahWijaya;
	
	//Output hasil dari metode-metode dalam kelas Anak
	cout << silsilahWijaya.lihatSilsilahnya() << endl;
	cout << silsilahWijaya.cekSilsilah() << endl;
	cout << silsilahWijaya.cekAnak() << endl;
	cout << silsilahWijaya.cekCucu() << endl;
	
	return 0;
}
