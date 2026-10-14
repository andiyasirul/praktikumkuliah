#include<iostream>
#include <string>
using namespace std;
int main () {
   string NamaProduk;
    cout<<"Masukkan Nama Menu";
    getline (cin, NamaProduk);
    int Kategori;
    cout<<"Masukkan Kategori Menu "<<endl;
    cout<<" Pilih antara : "<<endl;
    cout<<"1 = Paket Mahasiswa"<<endl;
    cout<<"2 = Paket Keluarga"<<endl;
    cout<<"3 = Paket Bukber"<<endl;
        int harga=0;
        int diskon=0;  
    cin>>Kategori;
    switch (Kategori){
        case 1 : harga=10000;
        diskon=10;
        break;
        case 2 : harga=50000;
        diskon=50;
        break;
        case 3 : harga=100000;
        diskon= 70;
        break;
        default : cout<<"Kategori Tidak Ada";
        return 1;
    }
    double HargaAkhir;
    HargaAkhir=harga*(100-diskon)/100;
    cout<<"Anda Cukup Membayar = "<<HargaAkhir;
    return 0;
  }