/*Napisz funkcje fraction, kt�ra przyjmuje nieujemna liczbe rzeczywista oraz modyfikujace referencje
dw�ch zmiennych rzeczywistych i wpisuje do tych zmiennych ca�kowita oraz u�amkowa czesc podanej
liczby. Funkcja powinna byc przystosowana do uzycia w przyk�adowym programie ponizej. Funkcja korzysta
tylko z pliku nag��wkowego cmath.*/

#include <cmath>
#include <iostream>

double fraction (double &calk, double &ulam, double number)
{
    //double calk, ulam;
    //&b = calk;
    //&c = ulam;

    calk = floor(number);
    ulam = number - calk;

    return 0;
}

int main() {
    double integral, fractional;
    fraction(integral, fractional, 3.14159);
    std::cout << integral << " " << fractional << std::endl; }
