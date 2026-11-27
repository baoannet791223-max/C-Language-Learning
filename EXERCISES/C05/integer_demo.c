
#include <stdio.h>

int main(void)
{
    signed int a = -100;
    unsigned int b = 100;

    printf("signed int: %d\n", a);
    printf("unsigned int: %u\n", b);

    printf("sizeof(signed int): %zu bytes\n", sizeof(a));
    printf("sizeof(unsigned int): %zu bytes\n", sizeof(b));

    return 0;
}
/*
signed int: -100
unsigned int: 100
sizeof(signed int): 4 bytes
sizeof(unsigned int): 4 bytes
*/

