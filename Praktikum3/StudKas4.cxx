#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    double rupiah;
    double kurs;
    int pilihan;
    string mataUang;

    cout << "Masukkan jumlah uang dalam Rupiah: ";
    cin >> rupiah;

    cout << "\nPilih mata uang tujuan konversi:" << endl;
    cout << "1. Dolar" << endl;
    cout << "2. Euro" << endl;
    cout << "3. Yen" << endl;
    cout << "4. Rupe" << endl;
    cout << "5. Rial" << endl;
    cout << "6. Won" << endl;
    cout << "7. Ringgit" << endl;
    cout << "8. Baht" << endl;
    cout << "Masukkan pilihan (1-8): ";
    cin >> pilihan;

    cout << "Masukkan  konversi ke mata uang pilihan: ";
    cin >> kurs;

    switch (pilihan) {
        case 1: mataUang = "Dolar"; break;
        case 2: mataUang = "Euro"; break;
        case 3: mataUang = "Yen"; break;
        case 4: mataUang = "Rupe"; break;
        case 5: mataUang = "Rial"; break;
        case 6: mataUang = "Won"; break;
        case 7: mataUang = "Ringgit"; break;
        case 8: mataUang = "Baht"; break;
        default: mataUang = "Mata Uang Asing"; break;
    }

    double hasil = rupiah / kurs;

    cout << fixed << setprecision(2);
    cout << "\nHasil konversi: " << hasil << " " << mataUang << endl;

    return 0;
}
