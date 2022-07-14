/*Napisz program minimum, kt�ry czyta ze standardowego wej�cia liczby rzeczywiste do napotkania ko�ca
pliku i wypisuje na standardowe wyj�cie najmniejsz� z nich. Je�eli nie wprowadzono �adnej liczby, program
nic nie wypisuje. Program za��cza tylko plik nag��wkowy iostream.
Przyk�adowe wykonanie
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

