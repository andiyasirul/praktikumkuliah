#include <iostream>

using namespace std;

int main () {
    int HargaBarang;
    int Total =0;
    int Opsi;
    do {
    cout << "Masukkan Harga Barang :";
    cin>>HargaBarang;
    Total += HargaBarang;
    cout <<"Apa ingin menambah barang?";
    cout <<"\n Ketik : 1 = Ya , 0 = Tidak : ";
    cin>>Opsi;
    }while (Opsi == 1);
   if (Total>500000){
   Total=Total*90/100;
   cout <<"Anda Mendapat Diskon 10%";
  } else if (Total>250000 && Total<500000){
      Total=Total*95/100;
      cout <<"Anda Mendapat Diskon 5%";
  }
  cout <<"\n Total Belanjaan Anda : "<< Total;
}
    
   
         
   
    