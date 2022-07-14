/*4.2.9 Letters: Zliczanie liter - indywidualnie
Napisz program letters, kt�ry czyta ze standardowego wejscia znaki do napotkania konca pliku, a
nastepnie wypisuje na standardowe wyjscie liczby wystapien kolejnych liter posr�d tych znak�w. Program
nie rozr�znia wielkich i ma�ych liter oraz pomija wszelkie inne znaki. Program za�acza tylko pliki
nag��wkowe cctype, iostream i vector.
Przyk�adowe wykonanie
In: Lorem ipsum dolor sit amet!
Out: 1 0 0 1 2 0 0 0 2 0 0 2 3 0 3 1 0 2 2 2 1 0 0 0 0 0*/

#include <iostream>
#include <vector>
#include <cctype>

int main()
{
    std::vector<char> vec;

    for (char letter; std::cin >> letter;) {
        vec.push_back(letter);}

    int i = vec.size();
    int wynik[26];

    for (int num = 0; num < 26; num++)
    {
        wynik[num] = 0;
        for (int k = 0; k < i; k++)
        {
            int kod = vec[k];
            if (kod == (num + 65) || kod == (num + 97))
            {
                wynik[num] += 1;
            }
        }
    }

    for (int a = 0; a < 26; a++)
    {
        std::cout << wynik[a] << " ";
    }
}

