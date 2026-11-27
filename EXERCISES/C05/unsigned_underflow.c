#include <stdio.h>

int main(void)
{
    unsigned int a = 100;

    a = a - 200;

    printf("a = %u\n", a);

    return 0;
}
/*
unsigned int a = 100;
a = a - 200;
无符号整数的运算结果不会变成负数，而是按照模运算规则回绕。

*/