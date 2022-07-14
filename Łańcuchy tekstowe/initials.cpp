/*Napisz funkcje initials, kt�ra przyjmuje sta�a referencje �ancucha imion oraz nazwisk pewnej osoby i
zwraca �ancuch jej inicja��w, czyli pierwszych liter kolejnych cz�on�w. Funkcja powinna byc przystosowana
do uzycia w przyk�adowym programie ponizej. Funkcja korzysta tylko z plik�w nag��wkowych cctype i
string.
Przyk�adowy program
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
