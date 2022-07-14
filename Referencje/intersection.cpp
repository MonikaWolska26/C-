/*Napisz funkcje intersection, któa przyjmuje sta³e referencje dwóch uporzadkowanych rosnaco wektorów
liczb ca³kowitych i zwraca uporzadkowany rosnaco wektor liczb zawartych w obu tych wektorach
jednoczesnie. Funkcja powinna byc przystosowana do uzycia w przyk³adowym programie ponizej. Funkcja
korzysta tylko z pliku nag³ówkowego vector.
*/

#include <vector>
#include <iostream>

std::vector<int> intersection(const std::vector<int> &va, const std::vector<int> &vb)
{
    std::vector<int> result;
    for(size_t a=0,b=0;(a<va.size())&&(b<vb.size());++a,++b)
    {
            if(va[a]<vb[b]) --b;
            else if(va[a]>vb[b]) --a;
            else result.push_back(va[a]);
    }
    return result;
}


int main() {
    const std::vector<int> vector1 {-7, 2, 3, 7, 15, 18, 23},
                            vector2 {-8, 3, 5, 8, 15, 23, 30};
    std::vector<int> result = intersection(vector1, vector2);
    for (int element: result) {
        std::cout << element << " "; }
    std::cout << std::endl; }
