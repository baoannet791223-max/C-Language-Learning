
#include <stdio.h>
#include <limits.h>

int main(void)
{
    unsigned int number = UINT_MAX;

    printf("Before: %u\n", number);

    number = number + 1;

    printf("After: %u\n", number);

    return 0;
}

/*
Before: 4294967295
After: 0
*/