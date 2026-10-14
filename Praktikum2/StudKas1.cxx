#include <iostream>
#include <iomanip>
#include <string> 

 using namespace std;
 
 int main () {
 string Nama;
 int JamKerja;
 int TarifPerJam;
 int TotalGaji;
 
 cout << "Masukkan Nama Anda :";
 cin >> Nama;
 cout << "Masukkan Jam Kerja :" ;
 cin >> JamKerja;
 cout << "Masukkan Tarif PerJam :";
  cin >> TarifPerJam;
  TotalGaji = TarifPerJam*JamKerja;
  

cout << "----------Nota----------"<<endl;
cout <<left<<setw(5)<<"Nama"<<setw(10)<<"TarifPerJam" <<setw(15)<< "JamKerja"<< setw(20)<< "Total Gaji"<<endl;
cout <<left<<setw(5)<<Nama<<setw(10)<<TarifPerJam<<setw(15)<<JamKerja<<setw(20)<<TotalGaji<<endl;
 
 return 0;
 }
 

	
