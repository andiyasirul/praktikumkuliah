#include <iostream>

using namespace std;

int main(){
    int KWH=0;
    cout <<"Masukkan Penggunaan Listrik (kWh) : ";
    cin>> KWH;
    if (KWH<=100){
        KWH=KWH*1500;
    }else if(KWH>100 && KWH<=300){
        KWH=KWH*2000;
    }else if (KWH>300){
        KWH=KWH*3000;
  } if (KWH>=1000000){
            KWH=KWH*9/10;
    }cout<<"Harga yang harus dibayar : Rp."<<KWH<<endl;
    }
    
        