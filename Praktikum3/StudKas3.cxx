#include <iostream>
using namespace std;

int main() {
    int LPV;
    int Bangun;
    double panjang, lebar, tinggi;
    double Hasil = 0;
   
    cout << "Mau Cari Apa?" << endl;
    cout << "1 = Luas Permukaan, 2 = Volume" << endl;
    cout << "Pilihan Anda: ";
    cin >> LPV;

    if (LPV != 1 && LPV != 2) {
        cout << "Tidak Ada Ojo ngarang" << endl;
           }else {
   

    cout << "\nPilih Bentuk" << endl;
    cout << "1 = Balok, 2 = Kubus" << endl;
    cout << "Pilihan Anda: ";
    cin >> Bangun;

    switch (Bangun) {
        case 1:
            cout << "\n--- Menghitung Balok ---" << endl;
            cout << "Masukkan Panjang : "; cin >> panjang;
            cout << "Masukkan Lebar   : "; cin >> lebar;
            cout << "Masukkan Tinggi  : "; cin >> tinggi;
            
            if (LPV == 1) {
                Hasil = 2 * (panjang * lebar + lebar * tinggi + panjang * tinggi);
            } else {
                Hasil = panjang * lebar * tinggi;
            }
            break;

        case 2:
            cout << "\n--- Menghitung Kubus ---" << endl;
            cout << "Masukkan Panjang Sisi: "; cin >> panjang;
            
            if (LPV == 1) {
                Hasil = 6 * panjang * panjang;
            } else {
                Hasil = panjang * panjang * panjang;
            }
            break;

        default:
            cout << "Ganok" << endl;
            return 1;
    }
    }

    cout << "\n=========================" << endl;
    cout << "Hasil Perhitungan = " << Hasil << endl;
    cout << "=========================" << endl;
    }
  

    return 0;
}
