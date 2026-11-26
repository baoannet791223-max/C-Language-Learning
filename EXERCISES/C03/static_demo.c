#include <stdio.h>

void test(void)
{
    static int number = 0;

    number++;

    printf("number = %d\n", number);

}

int main(void)
{
    test();
    test();
    test();

    return 0;
}