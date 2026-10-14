#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main () {
    string Nama;
    int JamKerja;
    int TotalGaji;
    int TarifPerJam = 0;
    int Posisi; 

    cout << "Masukkan Nama  : ";
    getline(cin, Nama); 

    cout << "Masukkan Jam Kerja : ";
    cin >> JamKerja;
    cout << "Masukkan Nomor Posisi" << endl;
    cout << "1=Bos, 2=Manajer, 3=Karyawan" << endl;
    cout << "Pilihan Posisi (1-3): ";
    cin >> Posisi; 

    switch (Posisi) { 
        case 1: 
            TarifPerJam = 100000; 
            break;
        case 2: 
            TarifPerJam = 75000; 
            break;
        case 3: 
            TarifPerJam = 25000; 
            break;
        default:
            cout << "Nomor posisi salah" << endl;
            return 1; 
    }

    
    TotalGaji = TarifPerJam * JamKerja;

    cout << "\n=========================" << endl;
    cout << "Nama Karyawan : " << Nama << endl;
    cout << "Tarif Per Jam : Rp " << TarifPerJam << endl;
    cout << "Jam Kerja     : " << JamKerja << " jam" << endl;
    cout << "Total Gaji    : Rp " << TotalGaji << endl;
    cout << "=========================" << endl;

    return 0;
}
