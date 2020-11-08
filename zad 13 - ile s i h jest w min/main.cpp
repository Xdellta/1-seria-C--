//Patryk Piotrowski
//2 AG Informatyk | gr. 2
//zad. 13 | Seria: 1 | Lp. 11
//==================================================================================

#include <iostream>

using namespace std;

int pmin; //podane minuty
int h;
int s;

int main()
{
    cout << "podaj ilosc minut: ";
    cin >> pmin;
    cout << pmin << endl;

    h = pmin / 60;
    cout << "w " << pmin << " min. miesci sie: " << h << " godz." << endl;

    s = pmin * 60;
    cout << "w " << pmin << " min. miesci sie: " << s << " sekund" << endl;

    return 0;
}
