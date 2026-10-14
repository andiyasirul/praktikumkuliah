#include<iostream>
#include<iomanip>
using namespace std;

int main (){
    int konversi; 
    double cm, mm, km;
    
    for (int m = 1; m <= 10; m++) {
        cout << "\nPilih Konversi untuk " << m << " meter:" << endl;
        cout << "1 = mm ; 2 = cm ; 3 = km : ";
        cin >> konversi;
        cout << left << setw(5) << m << " meter = ";
        
        switch (konversi){
            case 1: 
                mm = m * 1000.0; 
                cout << setw(10) << mm << " mm" << endl;
                break;
            case 2: 
                cm = m * 100.0; 
                cout << setw(10) << cm << " cm" << endl;
                break;
            case 3: 
                km = m / 1000.0; 
                cout << setw(10) << km << " km" << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
                break;
        }
    }
    return 0;
}
