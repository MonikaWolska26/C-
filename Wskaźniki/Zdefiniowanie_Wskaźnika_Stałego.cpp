/*Zdefiniowaæ wskaŸnik do sta³ej typu long. Zainicjowaæ wskaŸnik adresem sta³ej const
long x = 123. Zdefiniowaæ sta³y wskaŸnik do sta³ej typu double. Zainicjowaæ wskaŸnik
adresem sta³ej const double y=125.7. Wyprowadziæ na ekran zawartoœci zmiennych x i y
za pomoc¹ wskaŸników oraz za pomoc¹ identyfikatorów zmiennych. */

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
