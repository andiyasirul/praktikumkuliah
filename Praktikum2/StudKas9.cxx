#include<iostream>
#include<iomanip>
using namespace std;
int main (){
    double m;
    cout<<left<<setw(5)<<"m"<<setw(10)<<"cm"<<setw(15)<<"mm"<<setw(20)<<"km"<<endl;
    for (int m=1 ; m<=10 ; m++) {
        double cm=m*100;
        double mm=m*1000;
        double km=m/1000;
        cout<<left<<setw(5)<<m<<setw(10)<<cm<< setw(15)<<mm<<setw(20)<<km<<endl;
    }
    return 0;
}
    