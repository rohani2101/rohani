#include <iostream>
using namespace std;
int main()
{
    /*
    //perulangan for
     int a;
     for (a = 1; a <= 100; a++)
         cout << "a = " << a << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << i << endl;
    }
    */

    // perulangan while
    // int i = 5;
    // while (i < 4)
    //  cout << i << endl;
    // i++;

    // perulangan dowhile
    // int i = 5;
    // do
    //{
    //  cout << i << endl;
    //  i++;
    // } while (i < 4);

    // perulangan for dari yang terbesar
    // for (int i = 0; i < 11; i++)
    // for (int i = 10; i >= 0; i--)
    // {
    //    cout << i << endl;
    //}

    // perulangan kelipatan 3
    /*
     for (int i = 0; i <= 27; i += 3)
    {
        cout << i << endl;
    }
     */

    int i = 1;
    while (i <= 15)
    {
        cout << i * i - i << " ";
        i++;
    }
}
