
#include <stdio.h>

int main(void)
{
    float a = 3.141592653589793f;
    double b = 3.141592653589793;

    printf("float:  %.15f\n", a);
    printf("double: %.15f\n", b);

    return 0;
}

/*
float:  3.141592741012573
double: 3.141592653589793
*/