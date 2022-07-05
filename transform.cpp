/*
Napisz funkcje transform, kt�ra przyjmuje niemodyfikujacy iterator poczatkowy i koncowy wycinka
wektora liczb ca�kowitych, modyfikujacy iterator poczatkowy innego wycinka, oraz operacje przyjmujaca
i zwracajaca liczbe ca�kowita.

Funkcja wpisuje do kolejnych kom�rek drugiego wycinka wyniki wywo�ania
tej operacji na kolejnych elementach pierwszego i zwraca modyfikujacy iterator koncowy drugiego wycinka.

Funkcja powinna byc przystosowana do uzycia w przyk�adowym programie ponizej. Funkcja korzysta
tylko z plik�w nag��wkowych functional i vector.
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
