/*
Napisz funkcje transform, która przyjmuje niemodyfikujacy iterator poczatkowy i koncowy wycinka
wektora liczb ca³kowitych, modyfikujacy iterator poczatkowy innego wycinka, oraz operacje przyjmujaca
i zwracajaca liczbe ca³kowita.

Funkcja wpisuje do kolejnych komórek drugiego wycinka wyniki wywo³ania
tej operacji na kolejnych elementach pierwszego i zwraca modyfikujacy iterator koncowy drugiego wycinka.

Funkcja powinna byc przystosowana do uzycia w przyk³adowym programie ponizej. Funkcja korzysta
tylko z plików nag³ówkowych functional i vector.
*/

#include<functional>
#include<vector>
#include<iostream>

std::vector<int>::iterator transform(std::vector<int>::const_iterator b, std::vector<int>::const_iterator e, std::vector<int>::iterator it, std::function<int(int)>multiply)
{
    for (auto i = b; i < e; ++i)
    {
        *it = multiply(*i);
        it++;
    }

    return it;
}

int main() {
    std::vector<int> vector1 {-7, 5, 1, 2, 11};
    std::vector<int> vector2(5);
    auto result = transform(vector1.cbegin(), vector1.cend(), vector2.begin(),[](int element) {return element * element; });

    for (auto iterator = vector2.cbegin(); iterator < result;)
    {
        std::cout << *iterator++ << " ";
    }

    std::cout << std::endl; }


//Out: 49 25 1 4 121
