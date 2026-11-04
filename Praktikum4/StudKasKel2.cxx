#include <iostream>

using namespace std;
 
 int main () {
     int P = 0;
     int Total=0;
         for  (int i = 1 ; i <=5 ; i++){
         cout<<"Apa Anda Hadir di hari ke -"<< i;
         cout<<"\n Ketik 1=Iya atau 0=Tidak : ";
         cin>>P ;
         Total+=P;
         }
         Total = Total*20;
         cout<<"Total Kehadiran "<<Total<<"%" <<endl;
        if (Total>=75){
            cout<< "Kehadiran Baik";
        }else if (Total >=50 && Total <75){
            cout <<"Kehadiran Cukup";
        }else if (Total <50){
            cout<<"Kehadiran Kurang";
        }
        return 0;
         }