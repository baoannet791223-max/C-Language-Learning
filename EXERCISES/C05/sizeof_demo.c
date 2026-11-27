#include <stdio.h>

int main(void)
{
    printf("int: %zu bytes\n", sizeof(int));
    printf("float: %zu bytes\n", sizeof(float));
    printf("char: %zu bytes\n", sizeof(char));
    printf("double: %zu bytes\n", sizeof(double));

    return 0;
}

/*
int: 4 bytes
float: 4 bytes
char: 1 bytes
double: 8 bytes
*/