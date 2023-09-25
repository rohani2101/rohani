#include <iostream>
using namespace std;
int main()
{
    int harga, uang, waktu;
    cout << "nominal uang = ";
    cin >> uang;
    cout << "harga makanan = ";
    cin >> harga;
    cout << "waktu = ";
    cin >> waktu;
    if (uang > harga)
    {
        cout << "kembalian anda = " << uang - harga << endl;
    }
    else if (uang < harga)
    {
        cout << "uang anda kurang" << endl;
    }
    else
    {
        cout << "terimakasih sudah berkunjung" << endl;
    }
}