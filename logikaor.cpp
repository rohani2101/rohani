#include <iostream>
using namespace std;
int main()
{
    int a, b, c, hasil1, hasil2, hasil3, hasilakhir;
    cout << "*==================================*" << endl;
    cout << "*===========    INPUT NILAU =======*" << endl;
    cout << "*==================================*" << endl;
    cout << "masukan nilai A =";
    cin >> a;
    cout << "masukan nilai B=";
    cin >> b;
    cout << "masukan nilai C =";
    cin >> c;

    hasil1 = a + 4 > 10;
    hasil2 = b > a + 5;
    hasil3 = c - 3 >= 4;
    hasilakhir = hasil1 || hasil2 || hasil3;
    // hasilakhir = hasil1 & hasil2 & hasil3;s
    cout << "" << endl;
    cout << "+=============================================================+" << endl;
    cout << "hasil1 dari hasil1 = a + 4 < 10 adalah " << hasil1 << endl;
    cout << "hasil2 dari hasil2 = b > a + 5 adalah " << hasil1 << endl;
    cout << "hasil3 dari hasil3 = c - 3 >= 4 adalah " << hasil1 << endl;
    cout << "hasil dari hasil akhiir = A & B & C adalah " << hasilakhir << endl;
    cout << "+=============================================================+" << endl;
    return 0;
}