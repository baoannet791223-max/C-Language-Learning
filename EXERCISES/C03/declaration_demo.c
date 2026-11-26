#include <stdio.h>
 
int number = 100;
 
extern int number;

int main(void)
{
    printf("number = %d\n", number);

    return 0;
}

/*int number = 100; 定义了变量。
extern int number; 再次声明这个已经定义的变量。
main() 使用这个变量。
这里的两次声明指向同一个变量，并没有创建两个 number。
int number = 100;：定义变量，并初始化为 100。
extern int number;：声明变量，告诉编译器这个变量已经在其他地方定义。*/