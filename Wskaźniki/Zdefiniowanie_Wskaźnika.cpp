/*Zdefiniowa� wska�nik na zmienn� typu int. Zainicjowa� wska�nik adresem zmiennej
ca�kowitej int a = 5. Wyprowadzi� na ekran zawarto�� zmiennej za pomoc� wska�nika
oraz za pomoc� identyfikatora zmiennej (warto�ci powinny by� identyczne). */

#include <iostream>

using namespace std;

int main()
{
	int a = 5;

	int *x = &a;

	cout << a << " " << *x;
}
