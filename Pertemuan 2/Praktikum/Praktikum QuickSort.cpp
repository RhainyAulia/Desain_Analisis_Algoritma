#include <iostream>
using namespace std;

//praktikum quicksort

void swap(int arr[], int pos1, int pos2){
	int temp;
	temp = arr[pos1];
	arr[pos1] = arr[pos2];
	arr[pos2] = temp;
}

int partition(int arr[], int low, int high, int pivot) {
    int i = low;
    int j = low;

    while (i <= high) {
        if (arr[i] < pivot) {
            i++;
        } else {
            swap(arr, i, j);
            i++;
            j++;
        }
    }

    return j - 1;
}


void quicksort(int arr[], int low, int high){
	if (low < high){
		int pivot = arr[high];
		int pos = partition(arr,low, high, pivot);
		
		quicksort ( arr, low, pos-1);
		quicksort (arr, pos+1, high);
	}
}

int main (){
	int arr [5];
	
	cout << "Masukkan 5 elemen : ";
	for (int i=0 ; i<5 ; i++){
		cin >> arr[i];
	}
	
    cout << "Array sebelum diurutkan : ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;

    quicksort(arr, 0, 5 - 1); 

    cout << "Array setelah diurutkan : ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
