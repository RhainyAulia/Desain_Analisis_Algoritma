#include <iostream>
using namespace std;

//PR Selection Sort PTM1

int main (){
	
	int arr;
	
	cout << "Masukan jumlah elemen : ";
	cin >> arr;
	cout << endl;
	
	int array[arr];

	cout << "Masukkan nilai elemen : ";	
	for (int i = 0; i < arr; i++){
		cin >> array [i];
	}
	
	cout << "Data sebelum sorting : ";
	for (int i = 0; i < arr; i++){
		cout << array[i] << " ";
	}
	cout << endl;
	
	//Selection Sort
    for (int i = 0; i < arr - 1; i++) {
        int min = i;
        for (int j = i + 1; j < arr; j++) {
            if (array[j] < array[min]) {
                min = j;
            }
        }
        // Tukar elemen terkecil dengan elemen pertama yang belum diurutkan
        int temp = array[i];
        array[i] = array[min];
        array[min] = temp;

        // Tahapan sort
        cout << "Iterasi ke-" << i + 1 << ": " << endl;
        for (int k = 0; k < arr; k++){
            cout << array[k] << " ";
		}
		cout << endl;
    }
    
    // final array
    cout << "Array setelah sorting: ";
    for (int i = 0; i < arr; i++)
        cout << array[i] << " ";
    cout << endl;
}
