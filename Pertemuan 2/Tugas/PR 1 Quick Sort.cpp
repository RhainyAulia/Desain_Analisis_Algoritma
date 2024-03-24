#include <iostream>
#include <algorithm>
using namespace std;

int partisi(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] > pivot) {
            i++;
            
            swap(arr[i], arr[j]);
        }
    }
    
    swap(arr[i + 1], arr[high]);
    
	return i + 1;
}

void QuickSort(int temp[], int low, int high) {
    if (low < high) {
        int pivot = partisi(temp, low, high);

        cout << "{ ";
        for (int i = 0; i < 10; i++) {
            cout << temp[i] << " ";
        }
        
        cout << " }";
        cout << endl;

        QuickSort(temp, low, pivot - 1);
        QuickSort(temp, pivot + 1, high);
    }
}

int main() {
    int arr[10];
    
    cout << "Masukkan 10 data: { ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    cout << "}" << endl;
    
    system("cls");
    
    cout << "Data yang akan di sort : { ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << "}" << endl << endl;

    cout << "Quick Sort: " << endl;
    QuickSort(arr, 0, 10 - 1);

    return 0;
}

