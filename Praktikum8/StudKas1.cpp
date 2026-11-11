#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung total nilai
int jumlahNilai(int nilai[], int n) {
    if (n == 0) {
        return 0;
    }

    return nilai[n - 1] + jumlahNilai(nilai, n - 1);
}

// Fungsi untuk mencari nilai terbesar
int nilaiTerbesar(int nilai[], int n) {
    int terbesar = nilai[0];

    for (int i = 1; i < n; i++) {
        if (nilai[i] > terbesar) {
            terbesar = nilai[i];
        }
    }

    return terbesar;
}

// Fungsi untuk mencari nilai terkecil
int nilaiTerkecil(int nilai[], int n) {
    int terkecil = nilai[0];

    for (int i = 1; i < n; i++) {
        if (nilai[i] < terkecil) {
            terkecil = nilai[i];
        }
    }

    return terkecil;
}

int main() {
    int n;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;

    // Memeriksa jumlah mahasiswa
    if (n <= 0) {
        cout << "Jumlah mahasiswa tidak boleh 0 atau negatif!" << endl;
        return 0;
    }

    // Membuat array dinamis
    int* nilai = new int[n];

    // Input nilai mahasiswa
    cout << "\nMasukkan nilai mahasiswa:" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << ": ";
        cin >> nilai[i];
    }

    // Menghitung rata-rata menggunakan rekursif
    int total = jumlahNilai(nilai, n);
    double rataRata = (double)total / n;

    // Menampilkan hasil
    cout << "\n===== HASIL PENGELOLAAN NILAI =====" << endl;

    cout << "Nilai terbesar : "
         << nilaiTerbesar(nilai, n) << endl;

    cout << "Nilai terkecil : "
         << nilaiTerkecil(nilai, n) << endl;

    cout << "Rata-rata nilai: "
         << rataRata << endl;

    // Menghapus array dinamis
    delete[] nilai;

    return 0;
}