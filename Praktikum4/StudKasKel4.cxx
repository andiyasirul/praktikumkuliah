#include <iostream>
using namespace std;

int main () {
    double N = 0;
    double Total = 0;
    double RataRata;
    int M = 0; 
    int U;

    do {
        cout << "Masukkan Nilai Pelajaran : ";
        cin >> N;
        
        Total += N; 
        M++;       
        
        cout << "Ingin Menambahkan Nilai Lagi?\n";
        cout << "Ketik 1=Iya , 0=Tidak: ";
        cin >> U;  
    } while (U == 1); 
    if (M > 0) {
        RataRata = Total / M;
        cout << "\nRata-Rata Nilai: " << RataRata << endl;
        if (RataRata >= 85) {
            cout << "Sangat Baik" << endl;
        } else if (RataRata < 85 && RataRata >= 70) {
            cout << "Baik" << endl;
        } else if (RataRata < 70 && RataRata >= 50) {
            cout << "Kurang" << endl;
        } else {
            cout << "Perbaikan" << endl;
        }
    } else {
        cout << "Tidak ada data nilai yang dimasukkan." << endl;
    }

    return 0;
}
