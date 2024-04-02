#include<iostream>
using namespace std;

float tambah(float a, float b){
	return a + b;
}
float kurang(float a, float b){
	return a - b;
}
float kali(float a,float b){
	return a * b;
	
}
float bagi(float a,float b){
	return a/b;
	
}

int main()
{
    char op, pil;
    float num1, num2;
    
	awal : 
	
	cout << "Masukkan 2 bilangan : ";
    cin >> num1 >> num2;
    
    cout << "Pilih Operasi ( + untuk tambah, - untuk kurang, * untuk kali, / untuk bagi) : ";
	cin >> op;
	
    switch (op){
		case '+':
			cout << "Hasil Pertambahan : " << tambah(num1, num2);
		break;
		case '-':
			cout << "Hasil Pengurangan : " << kurang(num1, num2);
		break;
		case '*':
			cout << "Hasil Perkalian : " << kali(num1, num2);
		break;
		case '/' :
			if (num2 == 0){
				cout << "ERROR! Pembagian dengan 0 tidak dapat dilakukan.";
			}else{
			cout << "Hasil Pembagian : " << bagi(num1, num2); 
			}
		default:
			"Operasi tidak ada"; 
	}
	
	cout << endl << "Apakah Anda ingin melanjutkan (y/n) : ";
	cin >> pil;
	
	while (pil == 'y' || pil == 'Y'){
		goto awal;
	}
return 0 ;

}
