#include <iostream>
using namespace std;
int main (){
    double panjang;
    double lebar;
    double tinggi;
    double LuasPermukaan;
    double JumlahLiterCat;
    double hargaCat;
    double totalBiaya;
    
    cout<<"Masukkan Panjang Tembok dalam m :";
    cin>>panjang;
    cout<<"Masukkan Lebar Tembok dalam m :";
    cin>>lebar;
    cout<<"Masukkan Tinggi Tembok dalam m :";
    cin>>tinggi;
    cout<<"Masukkan Harga Cat Per Liter : ";
    cin>>hargaCat;
    LuasPermukaan=((lebar*tinggi)+(tinggi*panjang))*2;
    cout <<"Luas Permukaan Tembok = "<<LuasPermukaan<<endl;
    JumlahLiterCat=LuasPermukaan/10;
    cout <<"Banyak Liter Cat yang dibutuhkan = "<<JumlahLiterCat<<endl;
    totalBiaya=JumlahLiterCat*hargaCat;
    cout<<"Total Biaya yang dibutuhkan : "<<totalBiaya<<endl;
    
    return 0;
}
    
    
    
    
    
    
    