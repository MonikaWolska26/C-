/*Zdefiniowa� wska�nik do sta�ej typu long. Zainicjowa� wska�nik adresem sta�ej const
long x = 123. Zdefiniowa� sta�y wska�nik do sta�ej typu double. Zainicjowa� wska�nik
adresem sta�ej const double y=125.7. Wyprowadzi� na ekran zawarto�ci zmiennych x i y
za pomoc� wska�nik�w oraz za pomoc� identyfikator�w zmiennych. */

#include <iostream>

using namespace std;

int main()
{
    const long x = 123;
    const double y = 125.7;
    const long *pointer_x = &x;
    const double *pointer_y = &y;

    cout << x << " " << *pointer_x << endl;
    cout << y << " " << *pointer_y << endl;

}
