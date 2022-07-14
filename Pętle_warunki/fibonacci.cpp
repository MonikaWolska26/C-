/* Fibonacciego zaczyna siê od wyrazów 1 i 2, a ka¿dy nastêpny jest sum¹ dwóch poprzednich. Napisz
program fibonacci, który wczytuje ze standardowego wejœcia nieujemn¹ liczbê ca³kowit¹ n i drukuje na
standardowe wyjœcie n pierwszych wyrazów ci¹gu Fibonacciego. Program za³¹cza tylko plik nag³ówkowy
iostream.
Przyk³adowe wykonanie
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
