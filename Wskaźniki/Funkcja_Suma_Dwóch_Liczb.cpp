/*Opracowa� funkcje, kt�re obliczaj� sum� dw�ch liczb rzeczywistych x i y typu double.
Prototypy funkcji maj� nast�puj�c� posta�:
a) double sum1(double x, double y); // suma zwracana przez warto�� funkcji
b) void sum2(double x, double y, double * z); // suma zwracana przez wska�nik
c) void sum3(double x, double y, double& z). // suma zwracana przez referencj� */

#include <iostream>

using namespace std;

double sum1(double a, double b)
    {
        double sum = a + b;
        return sum;
    }

void sum2(double a, double b, double *z)
    {
        *z = a+b;
        cout << *z << endl;
    }

void sum3(double a, double b, double& z)
    {

    }

int main()
{
    cout << sum1(5, 6) << endl;
    sum2(5, 6, double s);
}
