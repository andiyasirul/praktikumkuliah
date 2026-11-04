#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    int pilihan;
    
    do {
        double totalMakanan = 0;
        double totalTransportasi = 0;
        double totalHiburan = 0;
        double totalLainnya = 0;
        
        double pengeluaranTerbesar = -1;
        string kategoriTerbesar = "";
        
        for (int i = 1; i <= 7; i++) {
            string kategori;
            double jumlah;
            
            cout << "Masukkan kategori pengeluaran hari ke-" << i << " (Makanan/Transportasi/Hiburan/Lain-lain): ";
            cin >> kategori;
            
            cout << "Masukkan jumlah pengeluaran: Rp ";
            cin >> jumlah;
            
            if (kategori == "Makanan") {
                totalMakanan += jumlah;
            } else if (kategori == "Transportasi") {
                totalTransportasi += jumlah;
            } else if (kategori == "Hiburan") {
                totalHiburan += jumlah;
            } else {
                totalLainnya += jumlah;
                kategori = "Lainnya";
            }
            
            if (jumlah > pengeluaranTerbesar) {
                pengeluaranTerbesar = jumlah;
                kategoriTerbesar = kategori;
            }
        }
        
        double totalSeminggu = totalMakanan + totalTransportasi + totalHiburan + totalLainnya;
        
        cout << fixed << setprecision(2);
        cout << "Total Pengeluaran Makanan: Rp " << totalMakanan << endl;
        cout << "Total Pengeluaran Transportasi: Rp " << totalTransportasi << endl;
        cout << "Total Pengeluaran Hiburan: Rp " << totalHiburan << endl;
        cout << "Total Pengeluaran Lainnya: Rp " << totalLainnya << endl;
        cout << "Total Pengeluaran Selama Seminggu: Rp " << totalSeminggu << endl;
        cout << "Pengeluaran Terbesar: Rp " << pengeluaranTerbesar << " pada kategori " << kategoriTerbesar << endl;
        
        cout << "Ingin mencatat pengeluaran untuk minggu lain? (1 untuk ya, selain itu untuk tidak): ";
        cin >> pilihan;
        
    } while (pilihan == 1);
    
    return 0;
}
