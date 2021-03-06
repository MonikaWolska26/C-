/*
Napisz funkcje remove_if, która przyjmuje modyfikujacy iterator poczatkowy i koncowy wycinka wektora
liczb całkowitych oraz predykat przyjmujacy liczbe całkowita i zwracajacy wartosc logiczna.

Funkcja kopiuje kolejne elementy niespełniajace tego predykatu na kolejne pozycje na poczatku wycinka i zwraca
modyfikujacy iterator koncowy wycinka powstałego ze skopiowanych elementów.

Funkcja powinna byc przystosowana do uzycia w przykładowym programie ponizej. Funkcja korzysta tylko z plików nagłówkowych
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
