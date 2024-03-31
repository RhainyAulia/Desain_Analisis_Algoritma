#include <iostream>
#include <string>
using namespace std;

class pelajaran { //class name
	public: //Access specifier
	pelajaran(){ //constructor
	cout << "Ini adalah materi c++ tentang Constructors.";
	}
};

int main(){
	pelajaran obj; // membuat object dari class
	return 0;
}
