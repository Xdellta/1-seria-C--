//Patryk Piotrowski
//2 AG Informatyk | gr. 2
//zad. 11 | Seria: 1 | Lp. 10
//==================================================================================

#include <iostream>

using namespace std;

int pmin;
int wh; //wynik godzin
int wm; //wynik minut

int main()
{
    cout << "Podaj ilosc minut: ";
    cin >> pmin;
    cout << endl;

    wh = pmin / 60;
    cout << "godzin: " << wh << endl;

    wm = pmin % 60;
    cout << "minut: " << wm << endl;

    return 0;
}
