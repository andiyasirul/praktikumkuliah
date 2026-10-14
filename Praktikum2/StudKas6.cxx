#include <iostream>
using namespace std;
int main (){
    double Suhu1;
    double Suhu2;
    double Suhu3;
    double Suhu4;
    double Suhu5;
    double RataRataSuhu;
    cout<<"Masukkan Suhu Hari ke-1 :";
    cin>>Suhu1;
    cout<<"Masukkan Suhu Hari ke-2 :"; cin>>Suhu2;
    cout<<"Masukkan Suhu Hari ke-3 :"; cin>>Suhu3;
    cout<<"Masukkan Suhu Hari ke-4 :" ; cin>>Suhu4;
	cout<<"Masukkan Suhu Hari ke-5 :"; cin>>Suhu5;
	RataRataSuhu=(Suhu1+Suhu2+Suhu3+Suhu4+Suhu5)/5;
	cout<<"Rata-Rata Suhu ialah : "<<RataRataSuhu<<endl;
	        
	    
	return 0;
}