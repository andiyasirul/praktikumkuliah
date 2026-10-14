#include <iostream>
using namespace std;

int main (){
    double BeratBadan;
    double TinggiBadan;
    double BMI;
    double TinggiBadan1;
    cout<<"Masukkan Berat Badan :";
    cin>>BeratBadan;
    cout<<"Masukkan Tinggi Badan dalam cm :";
    cin>>TinggiBadan1;
    TinggiBadan=TinggiBadan1/100;
    BMI=BeratBadan/(TinggiBadan*TinggiBadan);
    if (BMI<18.5 || BMI>25)
    cout <<"Sepurane Gak Ideal";
    else 
    cout <<"Yeay Ideal";
    
    return 0;
	
}