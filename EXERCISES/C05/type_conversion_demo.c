#include <stdio.h>

int main(void)
{
    int a = 5;
    int b = 2;

    double x = (double)(a / b);
    double y = (double)a / b;
    double z = a / (double)b;

    printf("x = %f\n", x);
    printf("y = %f\n", y);
    printf("z = %f\n", z);

    return 0;
}