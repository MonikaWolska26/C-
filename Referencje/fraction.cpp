/*Napisz funkcje fraction, która przyjmuje nieujemna liczbe rzeczywista oraz modyfikujace referencje
dwóch zmiennych rzeczywistych i wpisuje do tych zmiennych ca³kowita oraz u³amkowa czesc podanej
liczby. Funkcja powinna byc przystosowana do uzycia w przyk³adowym programie ponizej. Funkcja korzysta
tylko z pliku nag³ówkowego cmath.*/

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
