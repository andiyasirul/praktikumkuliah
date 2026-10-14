#include <iostream>

using namespace std;

int main() {
    double berat, tinggi, bmi;

    cout << "Masukkan berat badan (kg): ";
    cin >> berat;
    cout << "Masukkan tinggi badan (cm): ";
    cin >> tinggi;

    tinggi = tinggi / 100.0;
    bmi = berat / (tinggi * tinggi);

    cout << "BMImu: " << bmi << endl;

    if (bmi < 18.5) {
        cout << "Kategori: Berat badan kurang (underweight)" << endl;
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        cout << "Kategori: Berat badan normal" << endl;
    } else if (bmi >= 25.0 && bmi <= 29.9) {
        cout << "Kategori: Berat badan berlebih (overweight)" << endl;
    } else {
        cout << "Kategori: Obesitas" << endl;
    }

    return 0;
}
