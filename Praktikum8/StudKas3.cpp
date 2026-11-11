#include <iostream>

using namespace std;

int** buatMatriks(int baris, int kolom) {
    int** m = new int*[baris];
    for (int i = 0; i < baris; i++) {
        m[i] = new int[kolom];
    }
    return m;
}

void hapusMatriks(int** m, int baris) {
    for (int i = 0; i < baris; i++) {
        delete[] m[i];
    }
    delete[] m;
}

void cetakMatriks(int** m, int baris, int kolom, int i = 0) {
    if (i == baris) {
        return;
    }
    for (int j = 0; j < kolom; j++) {
        cout << m[i][j] << " ";
    }
    cout << endl;
    cetakMatriks(m, baris, kolom, i + 1);
}

int** transpose(int** asli, int baris, int kolom) {
    int** t = buatMatriks(kolom, baris);   
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            t[j][i] = asli[i][j];
        }
    }
    return t;
}

int main() {
    int baris, kolom;
    cout << "Jumlah baris : ";
    cin >> baris;
    cout << "Jumlah kolom : ";
    cin >> kolom;

    int** matriks = buatMatriks(baris, kolom);

    cout << "Matriks:" << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cin >> matriks[i][j];
        }
    }

    int** hasil = transpose(matriks, baris, kolom);

    cout << endl << "Matriks asli:" << endl;
    cetakMatriks(matriks, baris, kolom);

    cout << endl << "Matriks transpose:" << endl;
    cetakMatriks(hasil, kolom, baris);     

    hapusMatriks(matriks, baris);
    hapusMatriks(hasil, kolom);
    return 0;
}