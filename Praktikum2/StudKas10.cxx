#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double angka1;
    double angka2;
    double angka3;
    double angka4;
    double angka5;
    double RataRata;
    double StandarDeviasi;
    cout<<"Masukkan Angka 1 : ";
    cin >>angka1;
     cout<<"Masukkan Angka 2 : ";
    cin >>angka2;
     cout<<"Masukkan Angka 3 : ";
    cin >>angka3;
     cout<<"Masukkan Angka 4 : ";
    cin >>angka4;
     cout<<"Masukkan Angka 5 :  ";
    cin >>angka5;
    RataRata=(angka1+angka2+angka3+angka4+angka5)/5;
    cout<<" rata-rata 5 angka ialah : ";
        double jumlahKuadratSelisih=pow(angka1 - RataRata, 2) +
                                  pow(angka2 - RataRata, 2) +
                                  pow(angka3 - RataRata, 2) +
                                  pow(angka4 - RataRata, 2) +
                                  pow(angka5 - RataRata, 2);
                                  
    StandarDeviasi = sqrt(jumlahKuadratSelisih / 5);

    cout << RataRata << endl;
    cout << "Standar deviasi ialah   : " << StandarDeviasi << endl;
}

    
    
    