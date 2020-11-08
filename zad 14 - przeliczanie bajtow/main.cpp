//Patryk Piotrowski
//2 AG Informatyk | gr. 2
//zad. 14 | Seria: 1 | Lp. 11
//==================================================================================

#include <iostream>

using namespace std;

float bajty;
float kilobajty;
float bity;

int main()
{
    cout << "Podaj ilosc bajtow: ";
    cin >> bajty;
    cout << "---------------------------------" << endl;
    cout << endl;
    cout << "Po przeliczeniu:" << endl;

    kilobajty = bajty / 1024;
    cout << "ilosc KB (Kilo bajtow):  " <<kilobajty << endl;

    bity = bajty * 8;
    cout << "ilosc b (bity):  " <<bity << endl;

    return 0;
}
