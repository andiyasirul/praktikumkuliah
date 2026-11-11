#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
struct Proyek {
    string nama;
    double anggaran;
    int pekerja;
};
void tampilkanProyek(const Proyek* list, int n, const string& judul) {
    cout << "\n--- " << judul << " ---\n";
    if (n == 0) {
        cout << "(Tidak ada data proyek)\n";
        return;
    }
    for (int i = 0; i < n; i++) {
        cout << "Proyek " << (i + 1) << ": \"" << list[i].nama 
             << "\", Anggaran: Rp " << fixed << setprecision(0) << list[i].anggaran 
             << ", Pekerja: " << list[i].pekerja << endl;
    }
}
void tambahProyek(Proyek*& list, int& n, Proyek baru) {
    Proyek* temp = new Proyek[n + 1];
    for (int i = 0; i < n; i++) {
        temp[i] = list[i];
    }
    temp[n] = baru;
    delete[] list;
    list = temp;
    n++;
}
bool hapusProyek(Proyek*& list, int& n, int indeks) {
    if (indeks < 0 || indeks >= n) {
        cout << "\n[Error] Indeks proyek tidak valid!\n";
        return false;
    }
    if (n == 1) {
        delete[] list;
        list = nullptr;
        n = 0;
        return true;
    }
    Proyek* temp = new Proyek[n - 1];
    int idxTemp = 0;
    for (int i = 0; i < n; i++) {
        if (i == indeks) continue;
        temp[idxTemp++] = list[i];
    }
    delete[] list;
    list = temp;
    n--;
    return true;
}
double hitungTotalAnggaran(const Proyek* list, int n) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        total += list[i].anggaran;
    }
    return total;
}
double hitungRataRataPekerja(const Proyek* list, int n) {
    if (n == 0) return 0;
    double totalPekerja = 0;
    for (int i = 0; i < n; i++) {
        totalPekerja += list[i].pekerja;
    }
    return totalPekerja / n;
}
int cariAnggaranTerbesar(const Proyek* list, int n) {
    if (n <= 0) return -1;
    int maxIdx = 0;
    for (int i = 1; i < n; i++) {
        if (list[i].anggaran > list[maxIdx].anggaran) {
            maxIdx = i;
        }
    }
    return maxIdx;
}
int main() {
    int n;
    cout << "Masukkan jumlah proyek awal: ";
    cin >> n;
    if (n < 0) {
        cout << "[Error] Jumlah proyek tidak boleh negatif!\n";
        return 0;
    }
    Proyek* daftarProyek = nullptr;
    if (n > 0) {
        daftarProyek = new Proyek[n];
        cout << "\nMasukkan data proyek:\n";
        for (int i = 0; i < n; i++) {
            cout << "Proyek " << (i + 1) << ":\n";
            cout << "  Nama proyek : ";
            cin.ignore();
            getline(cin, daftarProyek[i].nama);
            do {
                cout << "  Anggaran    : Rp ";
                cin >> daftarProyek[i].anggaran;
                if (daftarProyek[i].anggaran < 0) {
                    cout << "  [Error] Anggaran tidak boleh negatif!\n";
                }
            } while (daftarProyek[i].anggaran < 0);
            do {
                cout << "  Jumlah Pekerja: ";
                cin >> daftarProyek[i].pekerja;
                if (daftarProyek[i].pekerja < 0) {
                    cout << "  [Error] Jumlah pekerja tidak boleh negatif!\n";
                }
            } while (daftarProyek[i].pekerja < 0);
        }
    }
    cout << "\n============================================\n";
    cout << "OPERASI: Tambah Proyek Baru\n";
    Proyek proyekBaru;
    cout << "Masukkan nama proyek baru  : ";
    cin.ignore();
    getline(cin, proyekBaru.nama);
    do {
        cout << "Masukkan anggaran proyek   : Rp ";
        cin >> proyekBaru.anggaran;
        if (proyekBaru.anggaran < 0) cout << "  [Error] Anggaran tidak boleh negatif!\n";
    } while (proyekBaru.anggaran < 0);
    do {
        cout << "Masukkan jumlah pekerja    : ";
        cin >> proyekBaru.pekerja;
        if (proyekBaru.pekerja < 0) cout << "  [Error] Jumlah pekerja tidak boleh negatif!\n";
    } while (proyekBaru.pekerja < 0);
    tambahProyek(daftarProyek, n, proyekBaru);
    tampilkanProyek(daftarProyek, n, "Daftar proyek setelah penambahan");
    cout << "\n============================================\n";
    cout << "OPERASI: Hapus Proyek\n";
    int idxHapus;
    cout << "Masukkan indeks proyek yang akan dihapus (0 hingga " << (n - 1) << "): ";
    cin >> idxHapus;
    if (hapusProyek(daftarProyek, n, idxHapus)) {
        tampilkanProyek(daftarProyek, n, "Daftar proyek setelah penghapusan");
    }
    cout << "\n============================================\n";
    if (n > 0) {
        double totalAnggaran = hitungTotalAnggaran(daftarProyek, n);
        double rataPekerja = hitungRataRataPekerja(daftarProyek, n);
        int idxMax = cariAnggaranTerbesar(daftarProyek, n);

        cout << fixed << setprecision(0);
        cout << "Total anggaran seluruh proyek     : Rp " << totalAnggaran << endl;
        cout << fixed << setprecision(2);
        cout << "Rata-rata jumlah pekerja per proyek: " << rataPekerja << endl;
        cout << fixed << setprecision(0);
        cout << "Proyek dengan anggaran terbesar   : \"" << daftarProyek[idxMax].nama 
             << "\" (Rp " << daftarProyek[idxMax].anggaran << ")\n";
    } else {
        cout << "[Info] Tidak ada proyek tersisa untuk dianalisis.\n";
    }
    cout << "============================================\n";
    delete[] daftarProyek;
    return 0;
}