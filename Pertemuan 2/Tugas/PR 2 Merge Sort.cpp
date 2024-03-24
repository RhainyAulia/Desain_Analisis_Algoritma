#include <iostream>

using namespace std;

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] >= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        cout << "Memecah List {";
        for (int i = left; i <= right; i++) {
            cout << arr[i];
            if (i != right)
                cout << ", ";
        }
        cout << "}\n";

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        cout << "Menggabungkan List {";
        for (int i = left; i <= right; i++) {
            cout << arr[i];
            if (i != right)
                cout << ", ";
        }
        cout << "}\n";
        
        merge(arr, left, mid, right);
    }
}

int main() {
    int n;
    cout << "Masukkan jumlah elemen: ";
    cin >> n;

    int arr[n];
    cout << "Masukkan elemen array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    cout << "Hasil akhir (descending): {";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i != n - 1)
            cout << ", ";
    }
    cout << "}\n";

    return 0;
}

