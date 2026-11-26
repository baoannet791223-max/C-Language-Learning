#include <stdio.h>

int global_number = 100;

int main(void)
{
    int local_number =20;

    {
        int inner_number = 30;

        printf("global = %d\n", global_number);
        printf("local = %d\n", local_number);
        printf("inner = %d\n", inner_number);
    }
    return 0;
}