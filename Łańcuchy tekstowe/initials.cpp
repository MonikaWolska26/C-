/*Napisz funkcje initials, która przyjmuje sta³a referencje ³ancucha imion oraz nazwisk pewnej osoby i
zwraca ³ancuch jej inicja³ów, czyli pierwszych liter kolejnych cz³onów. Funkcja powinna byc przystosowana
do uzycia w przyk³adowym programie ponizej. Funkcja korzysta tylko z plików nag³ówkowych cctype i
string.
Przyk³adowy program
int main() {
std::cout << initials("John Fitzgerald Kennedy") << std::endl;
std::cout << initials(std::string("andy warhol")) << std::endl; }
Wykonanie
Out: JFK
Out: aw*/

#include <iostream>
#include <cctype>
#include <string>

std::string initials(const std::string &name) {
    std::string output;
    bool prev_is_space = true;
    for (char c : name) {
        if (prev_is_space && isalpha(c))
            output += c;
        prev_is_space = isspace(c);
    }
    return output;
}

int main()
{
    std::cout << initials("John Fitzgerald Kennedy") << std::endl;
    std::cout << initials(std::string("andy warhol")) << std::endl;
}
