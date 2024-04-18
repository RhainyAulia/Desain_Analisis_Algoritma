#include <iostream>
using namespace std;

class Karyawan {
	private:
		int gaji; //atribut
		
	public :
		void setGaji (int s){ //metode fungsi2nya
			gaji = s;
		}
		
		int getGaji(){
			return gaji;
		}
};

int main (){
	Karyawan myObj;
	myObj.setGaji(50000);
	cout << myObj.getGaji();
	
	return 0;
}
