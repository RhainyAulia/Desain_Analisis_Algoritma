#include <iostream>
using namespace std;

void Sort(int arr[], int n);
void print(int arr[], int n);


int main (){
	int arr[] = {12, 11, 13, 5 ,6};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Array sebelum diurutkan : " << endl;
	
	print (arr, n);
    Sort(arr, n);
	
	cout << "Array setelah diurutkan : " << endl;
    
    print (arr, n);
    
    return 0;
}

void Sort(int arr[], int n){
	    // Insertion Sort
    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
	}
	
}

void print(int arr[], int n){
	for (int i = 0; i < n; i++)
	cout << arr[i] << " ";
    cout << endl;   
}
