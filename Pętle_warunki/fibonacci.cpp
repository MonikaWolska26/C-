/* Fibonacciego zaczyna si� od wyraz�w 1 i 2, a ka�dy nast�pny jest sum� dw�ch poprzednich. Napisz
program fibonacci, kt�ry wczytuje ze standardowego wej�cia nieujemn� liczb� ca�kowit� n i drukuje na
standardowe wyj�cie n pierwszych wyraz�w ci�gu Fibonacciego. Program za��cza tylko plik nag��wkowy
iostream.
Przyk�adowe wykonanie
In: 9
Out: 1 2 3 5 8 13 21 34 55*/

#include <iostream>

int main ()
{
    unsigned int a;

    std::cin >> a;

    int f[10000];
    f[0] = 1;
    f[1] = 2;

    if (a==0)
    {
        return 0;
    }
    else if (a==1)
    {
        std::cout << f[0];
    }
    else
    {
        std::cout << f[0] << " " << f[1] << " ";
        for (int i=2; i<a; i++)
        {
            f[i] = f[i-1] + f[i-2];
            std::cout << f[i] << " ";
        }
    }

}
