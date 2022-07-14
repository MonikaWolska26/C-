/*Napisz program minimum, który czyta ze standardowego wejœcia liczby rzeczywiste do napotkania koñca
pliku i wypisuje na standardowe wyjœcie najmniejsz¹ z nich. Je¿eli nie wprowadzono ¿adnej liczby, program
nic nie wypisuje. Program za³¹cza tylko plik nag³ówkowy iostream.
Przyk³adowe wykonanie
In: 23.5 7.16 2 -1.3 -7 0.13 -1.3 28 -7 23.5
Out: -7
*/

#include <iostream>

int main()
{
	double min;

	std::cin >> min;

	if (std::cin.fail())
	{
        return 0;
	}
	else
	{
		for (double value; std::cin >> value;)
		{
			if (value < min)
			min = value;
		}
	}
std::cout << min << std::endl;
}

