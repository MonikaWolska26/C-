/*
Napisz funkcje remove_if, kt�ra przyjmuje modyfikujacy iterator poczatkowy i koncowy wycinka wektora
liczb ca�kowitych oraz predykat przyjmujacy liczbe ca�kowita i zwracajacy wartosc logiczna.

Funkcja kopiuje kolejne elementy niespe�niajace tego predykatu na kolejne pozycje na poczatku wycinka i zwraca
modyfikujacy iterator koncowy wycinka powsta�ego ze skopiowanych element�w.

Funkcja powinna byc przystosowana do uzycia w przyk�adowym programie ponizej. Funkcja korzysta tylko z plik�w nag��wkowych
functional i vector.
*/

#include <iostream>
#include <functional>
#include <vector>

std::vector<int>::iterator remove_if (std::vector<int>::iterator b, std::vector<int>::iterator e, std::function<bool(int)>compare)
{
    std::vector<int>::iterator k = b;

    for (auto i = b; i < e; ++i)
    {
        if (compare(*i) != 1)
        {
            *k = *i;
            k++;
        }
    }

    return k;
}


int main() {
    std::vector<int> vector {-7, 5, 2, 2, 11, 2, 3};
    auto result = remove_if(vector.begin(), vector.end(), [](int element) {return element < 3; });

    for (auto iterator = vector.cbegin(); iterator < result;) {
        std::cout << *iterator++ << " "; }
    std::cout << std::endl; }


//Out: 5 11 3
