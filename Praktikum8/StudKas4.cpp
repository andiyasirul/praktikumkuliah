#include <iostream>
#include <string>
#include <cmath>

using namespace std;

const double BATAS[] = {100000, 500000};
const int    DISKON[] = {5, 10};

int hitungDiskon(double harga, int level) {
    if (level < 0) {                       
        return 0;
    }
    if (harga > BATAS[level]) {           
        return DISKON[level];
    }
    return hitungDiskon(harga, level - 1); 
}


string formatRibuan(long long angka) {
    string s = to_string(angka);
    for (int i = (int)s.length() - 3; i > 0; i -= 3) {
        s.insert(i, ".");
    }
    return s;
}

int main() {
    int n;
    cout << "Masukkan jumlah barang: ";
    cin >> n;

    if (n <= 0) {
        cout << "Jumlah barang harus lebih dari 0." << endl;
        return 0;
    }

    double *harga = new double[n];         
    for (int i = 0; i < n; i++) {
        cout << "Masukkan harga barang " << i + 1 << ": ";
        cin >> harga[i];
    }

    double total = 0;
    bool adaDiskon = false;
    int *persen = new int[n];

    for (int i = 0; i < n; i++) {
        persen[i] = hitungDiskon(harga[i], 1);   
        total += harga[i] - harga[i] * persen[i] / 100.0;
        if (persen[i] > 0) adaDiskon = true;
    }

    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << "Diskon untuk barang " << i + 1 << ": ";
        if (persen[i] == 0) cout << "Tidak ada diskon" << endl;
        else                cout << persen[i] << "%" << endl;
    }

    cout << endl << "Total harga setelah diskon: " << formatRibuan(llround(total)) << endl;
    cout << (adaDiskon ? "Pesan: diskon sudah diterapkan." : "Pesan: tidak ada diskon yang diterapkan.") << endl;

    delete[] harga;                          
    delete[] persen;
    return 0;
}