/*Opracowaæ funkcje, które obliczaj¹ sumê dwóch liczb rzeczywistych x i y typu double.
Prototypy funkcji maj¹ nastêpuj¹c¹ postaæ:
a) double sum1(double x, double y); // suma zwracana przez wartoœæ funkcji
b) void sum2(double x, double y, double * z); // suma zwracana przez wskaŸnik
c) void sum3(double x, double y, double& z). // suma zwracana przez referencjê */

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
