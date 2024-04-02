#include <iostream>
using namespace std;


class mtk {
	private :
		float a,b,x, x2, x3, x4;
	public :
		void setTambah(float a, float b){
			x = a+b;
		}
		float getTambah(){
			return x;
		}
		
		void setKurang(float a, float b){
			x2 = a-b;
		}
		float getKurang(){
			return x2;
		}
		
		void setKali(float a, float b){
			x3 = a*b;
		}
		float getKali(){
			return x3;
		}
		
		void setBagi(float a, float b){
			x4 = a/b;
		}
		float getBagi(){
			return x4;
		}
	
};
int main (){
	float num1, num2;
	mtk mat;
	
	cout << "Masukkan angka pertama : ";
	cin >> num1;
	cout << "Masukkan angka kedua : ";
	cin >> num2;
	
	mat.setTambah(num1, num2);
	cout << endl << "Hasil Pertambahan : " << mat.getTambah()<<endl; 
	
	mat.setKurang(num1, num2);
	cout << "Hasil Pengurangan : " << mat.getKurang()<<endl;
	
	mat.setKali(num1, num2);
	cout << "Hasil Perkalian : " << mat.getKali()<<endl;
	
	if(num2 == 0){
		cout << "ERROR! Hasil Pembagian dengan 0 tidak dapat dilakukan!";
	}else{
	mat.setBagi(num1, num2);
	cout << "Hasil Pembagian : " << mat.getBagi()<<endl;
	}
	return 0;
}
