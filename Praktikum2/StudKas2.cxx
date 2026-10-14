#include <iostream>

using namespace std;
int main () {
int hargaAwal;
int diskon;
int hargaDiskon;
cout<<"Masukkan Harga Awal :";
cin>> hargaAwal;
cout <<"Masukkan Diskon :";
cin>> diskon;
cout << "Harga Setelah Diskon :";
hargaDiskon=hargaAwal-hargaAwal*diskon/100;
cout<< hargaDiskon;

return 0;
}