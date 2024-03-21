#include <iostream>
using namespace std;

//PR Insertion Sort PTM1

int main (){
	
	int arr;
	
	cout << "Masukan banyak array : ";
	cin >> arr;
	cout << endl;
	
	int array[arr];
	
	for (int i = 0; i < arr; i++){
		cout << "Masukkan angka ke-" << i+1 << ": ";
		cin >> array [i];
		cout << endl;
	}
	
	// Insertion Sort
    for (int i = 1; i < arr; i++) {
        int temp = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > temp) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = temp;

        // Menampilkan tahapan sort
        cout << "proses sorting ke-" << i << endl;
        for (int k = 0; k < arr; k++)
            cout << array[k] << " ";
        cout << endl;
    }
    
    // Hasil Akhir
    cout << "hasil akhir";
    for (int i = 0; i < arr; i++)
        cout << array
		[i] << " ";
    cout << endl;

    return 0;
}
