/*Zdefiniowaæ wskaŸnik na zmienn¹ typu int. Zainicjowaæ wskaŸnik adresem zmiennej
ca³kowitej int a = 5. Wyprowadziæ na ekran zawartoœæ zmiennej za pomoc¹ wskaŸnika
oraz za pomoc¹ identyfikatora zmiennej (wartoœci powinny byæ identyczne). */

#include <iostream>

using namespace std;

int main()
{
	int a = 5;

	int *x = &a;

	cout << a << " " << *x;
}
