#include <cstdio>

using namespace std;

int main()
{
    int x, y;
    int *px, *py;

    px = &x;
    py = &y;

    printf("\n Input first number: ");
    scanf("%d", px);
    printf("\n Input second number: ");
    scanf("%d", py);

    printf("\n Multiplication: %d * %d = %d", *px, *py, *px * *py);

    return 0;

}
