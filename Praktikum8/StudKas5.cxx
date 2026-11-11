#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
struct Produk {
    string nama;
    double harga;
    int terjual;
};
double hitungTotalPendapatan(const Produk* arr, int n) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        total += (arr[i].harga * arr[i].terjual);
    }
    return total;
}
int cariProdukTertinggi(const Produk* arr, int n) {
    if (n <= 0) return -1;
    int maxIdx = 0;
    double maxPendapatan = arr[0].harga * arr[0].terjual;
    
    for (int i = 1; i < n; i++) {
        double pendapatan = arr[i].harga * arr[i].terjual;
        if (pendapatan > maxPendapatan) {
            maxPendapatan = pendapatan;
            maxIdx = i;
        }
    }
    return maxIdx;
}
int main() {
    int n;
    cout << "Masukkan jumlah produk: ";
    cin >> n;
    if (n <= 0) {
        cout << "\n[Peringatan] Jumlah produk harus lebih dari 0. Program dihentikan.\n";
        return 0;
    }

    Produk* daftarProduk = new Produk[n];
    cout << "\nMasukkan data produk (nama produk, harga satuan, jumlah terjual):\n";
    for (int i = 0; i < n; i++) {
        cout << "Produk " << (i + 1) << ":\n";
        cout << "  Nama produk   : ";
        cin.ignore();
        getline(cin, daftarProduk[i].nama);
        do {
            cout << "  Harga satuan  : Rp ";
            cin >> daftarProduk[i].harga;
            if (daftarProduk[i].harga < 0) {
                cout << "  [Error] Harga tidak boleh negatif!\n";
            }
        } while (daftarProduk[i].harga < 0);
        do {
            cout << "  Jumlah terjual: ";
            cin >> daftarProduk[i].terjual;
            if (daftarProduk[i].terjual < 0) {
                cout << "  [Error] Jumlah terjual tidak boleh negatif!\n";
            }
        } while (daftarProduk[i].terjual < 0);
    }
    double totalPendapatan = hitungTotalPendapatan(daftarProduk, n);
    double rataRata = totalPendapatan / n;
    int idxMax = cariProdukTertinggi(daftarProduk, n);
    double pendapatanMax = daftarProduk[idxMax].harga * daftarProduk[idxMax].terjual;
    cout << "\n============================================\n";
    cout << fixed << setprecision(0);
    cout << "Total pendapatan                : Rp " << totalPendapatan << endl;
    cout << "Rata-rata pendapatan per produk : Rp " << rataRata << endl;
    cout << "Produk dengan pendapatan tertinggi: \"" << daftarProduk[idxMax].nama 
         << "\" (Rp " << pendapatanMax << ")\n";
    cout << "============================================\n";

    delete[] daftarProduk;

    return 0;
}

