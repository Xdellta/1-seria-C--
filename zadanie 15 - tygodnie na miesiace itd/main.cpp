//Patryk Piotrowski
//2 AG Informatyk | gr. 2
//zad. 15 | Seria: 1 | Lp. 11
//==================================================================================

#include <iostream>

using namespace std;

float tygodnie;
float miesiace;
float dni;

int main()
{
    cout << "Podaj ilosc tygodni: ";
    cin >> tygodnie;
    cout << "---------------------------------" << endl;
    cout << endl;
    cout << "Po przeliczeniu:" << endl;

    miesiace = tygodnie / 4;
    cout << "ilosc miesiecy: " <<miesiace << endl;

    dni = tygodnie * 7;
    cout << "ilosc dni: " <<dni << endl;

    return 0;
}
