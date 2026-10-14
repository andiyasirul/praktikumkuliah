#include<iostream>
using namespace std;
int main (){
    double JarakTempuh;
    double KonsumsiBB;
    double HargaBB;
    double TotalBBB;
    cout<<"Perkiraan biaya bensin sesuai jarak"<<endl;
    cout<<"Masukkan Jarak Tempuh dalam km";
    cin>>JarakTempuh;
    cout<<"Masukkan Konsumsi Bahan Bakar dengan satuan km/l";
    cin>>KonsumsiBB;
    if (KonsumsiBB>15){
        cout<<"Efisien";}
        else if (KonsumsiBB<=15 && KonsumsiBB>10){cout<<"Cukup Efisien";}
        else if (KonsumsiBB<10){cout<<"Boros";
        }
    cout<<"Masukkan Harga Bahan Bakar per liter" ;
    cin>>HargaBB;
    TotalBBB=(JarakTempuh/KonsumsiBB)*HargaBB;
    cout<<"Biaya yang dibutuhkan untuk jarak  "<<JarakTempuh<<"adalah "<<TotalBBB;
    
    return 0;
    
}