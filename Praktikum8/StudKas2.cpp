
#include <iostream>
using namespace std;

// Fungsi untuk membuat matriks dinamis
int** buatMatriks(int baris, int kolom) {
    int** matriks = new int*[baris];

    for (int i = 0; i < baris; i++) {
        matriks[i] = new int[kolom];
    }

    return matriks;
}

// Fungsi untuk menginput matriks
void inputMatriks(int** matriks, int baris, int kolom) {
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cin >> matriks[i][j];
        }
    }
}

// Fungsi untuk mengalikan matriks
void perkalianMatriks(
    int** A, int** B, int** C,
    int barisA, int kolomA, int kolomB
) {
    for (int i = 0; i < barisA; i++) {
        for (int j = 0; j < kolomB; j++) {

            C[i][j] = 0;

            for (int k = 0; k < kolomA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Fungsi untuk menampilkan matriks
void tampilMatriks(int** matriks, int baris, int kolom) {
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << matriks[i][j] << "\t";
        }
        cout << endl;
    }
}

// Fungsi untuk menghapus matriks
void hapusMatriks(int** matriks, int baris) {
    for (int i = 0; i < baris; i++) {
        delete[] matriks[i];
    }

    delete[] matriks;
}

int main() {
    int barisA, kolomA;
    int barisB, kolomB;

    // Input ukuran matriks A
    cout << "Masukkan jumlah baris matriks A: ";
    cin >> barisA;

    cout << "Masukkan jumlah kolom matriks A: ";
    cin >> kolomA;

    // Input ukuran matriks B
    cout << "\nMasukkan jumlah baris matriks B: ";
    cin >> barisB;

    cout << "Masukkan jumlah kolom matriks B: ";
    cin >> kolomB;

    // Memeriksa ukuran matriks
    if (barisA <= 0 || kolomA <= 0 ||
        barisB <= 0 || kolomB <= 0) {

        cout << "\nUkuran matriks harus lebih dari 0!" << endl;
        return 0;
    }

    // Memeriksa apakah matriks dapat dikalikan
    if (kolomA != barisB) {
        cout << "\nMatriks tidak dapat dikalikan!" << endl;
        cout << "Jumlah kolom A harus sama dengan jumlah baris B."
             << endl;
        return 0;
    }

    // Membuat matriks dinamis
    int** A = buatMatriks(barisA, kolomA);
    int** B = buatMatriks(barisB, kolomB);
    int** C = buatMatriks(barisA, kolomB);

    // Input elemen matriks A
    cout << "\nMasukkan elemen matriks A:" << endl;
    inputMatriks(A, barisA, kolomA);

    // Input elemen matriks B
    cout << "\nMasukkan elemen matriks B:" << endl;
    inputMatriks(B, barisB, kolomB);

    // Proses perkalian matriks
    perkalianMatriks(A, B, C, barisA, kolomA, kolomB);

    // Menampilkan hasil
    cout << "\nMatriks A:" << endl;
    tampilMatriks(A, barisA, kolomA);

    cout << "\nMatriks B:" << endl;
    tampilMatriks(B, barisB, kolomB);

    cout << "\nHasil perkalian Matriks A dan B:" << endl;
    tampilMatriks(C, barisA, kolomB);

    // Menghapus memori matriks
    hapusMatriks(A, barisA);
    hapusMatriks(B, barisB);
    hapusMatriks(C, barisA);

    return 0;
}
