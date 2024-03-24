#include<iostream>
using namespace std;

/* 			TUGAS COMMENT PRAKTIKUM
			Merge Sort Dibawah */
// QuickSort

// Fungsi tukar elemen dalam array
void swap(int arr[], int pos1, int pos2){
	int temp; // variabel sementara utk simpan nilai
	temp = arr[pos1]; // simpan nilai variabel pos1 ke temp
	arr[pos1] = arr[pos2]; // nilai pos2 dipindah ke pos1
	arr[pos2] = temp; // nilai awal pos1 yang ada di var temp dipindah ke pos2
}

// Fungsi utk memotong/membagi array
int partition(int arr[], int low, int high, int pivot){
	int i = low; // indeks pertama iterasi
	int j = low; // indeks pertama untuk elemen yg lebih kecil dari pivot
	
	while (i <= high){ // periksa semua elemen dimulai dari yg paling kecil
		if(arr[i] > pivot){ // jika elemen lebih besar dari pivot(patokan),
			i++; // lanjut ke elemen selanjutnya
		}
		else{
			swap(arr, i, j); // jika elemen lebih kecil atau sama dengan pivot, tukar elemen tsb dgn elemen di posisi j
			i++; // maju ke elemen berikutnya
			j++; // maju ke posisi berikutnya untuk elemen yang lebih kecil dari pivot
		}
	}
	
	return j - 1; // kembali ke posisi terakhir dari elemen yang lebih kecil dari pivot
}

// Fungsi QuickSort
void quicksort(int arr[], int low, int high){
	if (low < high){ // jika masih ada lebih dari satu elemen dalam array yang mau diurut
		int pivot = arr[high]; // pilih elemen terakhir sbg pivot
		int pos = partition(arr, low, high, pivot); // bagi array berdasarkan pivot dan ambil posisi pivot yang baru
		
		quicksort(arr, low, pos - 1); // urutkan elemen bagian sebelum pivot
		quicksort(arr, pos + 1, high); // urutkan elemen bagian setelah pivot
	}
}

int main (){
	int n; 
	cout << "Tentukan panjang array : ";
	cin >> n; // input panjang array
	int arr[n]; // deklarasi array dgn n
	for (int i = 0; i < n; i++){
		cin >> arr[i]; // input elemen array
	}
	quicksort(arr, 0, n - 1); // panggil fungsi quicksort
	cout << "Berikut adalah array yang telah diurutkan : ";
	for (int i = 0; i < n; i++){
		cout << arr[i] << " "; // cetak elemen-elemen array yang terurut
	}
}

								// MergeSort

#include <iostream>
using namespace std;

// Fungsi untuk menggabungkan dua bagian array yang diurutkan
void merge(int arr[], int l, int m, int r) {
    int x, y, z; // Variabel untuk indeks dan penunjuk array
    int n1 = m - l; // Ukuran bagian array kiri
    int n2 = r - m; // Ukuran bagian array kanan

    // Array sementara untuk menyimpan bagian kiri dan kanan
    int L[n1], R[n2];
    
    // Mengisi array bagian kiri
    for (x = 0; x < n1; x++)
        L[x] = arr[l + x];
    // Mengisi array bagian kanan
    for (y = 0; y < n2; y++)
        R[y] = arr[m + 1 + y];

    x = 0;
    y = 0;
    z = l;
    
    // Menggabungkan bagian kiri dan kanan secara berurutan
    while (x < n1 && y < n2) {
        if (L[x] <= R[y]) { // Jika Kiri <= Kanan,
            arr[z] = L[x]; // masukkan elemen bagian kiri ke dalam array hasil
            x++; // Pindah ke elemen berikutnya di bagian kiri
        } else {
            arr[z] = R[y]; // Jika elemen bagian kanan lebih kecil dari elemen bagian kiri, masukkan elemen bagian kanan ke dalam array hasil
            y++; // Pindah ke elemen berikutnya di bagian kanan
        }
        z++; // Pindah ke posisi berikutnya di array hasil
    }
    
    // Menyalin sisa elemen dari bagian kiri (jika ada)
    while (x < n1) {
        arr[z] = L[x];
        x++;
        z++;
    }
    
    // Menyalin sisa elemen dari bagian kanan (jika ada)
    while (y < n2) {
        arr[z] = R[y];
        y++;
        z++;
    }
}

// Fungsi rekursif untuk melakukan pengurutan array menggunakan metode merge sort
void mergesort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2; // Menentukan titik tengah array
        mergesort(arr, l, m); // Pengurutan bagian kiri
        mergesort(arr, m + 1, r); // Pengurutan bagian kanan
        merge(arr, l, m, r); // Menggabungkan dua bagian yang telah diurutkan
    }
}

// Fungsi untuk menampilkan isi array
void show(int A[], int size) {
    for (int i = 0; i < size; i++) {
        cout << A[i] << " ";
    }
}


int main() {
    int size;
    cout << "\nMasukkan Banyak Data = ";
    cin >> size; //input ukuran array

    int arr[size]; //deklarasi array

    // Memasukkan data ke dalam array
    for (int i = 0; i < size; i++) {
        cout << "\nMasukkan Data Array ke " << i << " = ";
        cin >> arr[i];
    }
    
    // Memanggil fungsi merge sort
    mergesort(arr, 0, size - 1);

    cout << "Hasil\n";
    // Menampilkan hasil pengurutan
    show(arr, size);

    return 0;
}

