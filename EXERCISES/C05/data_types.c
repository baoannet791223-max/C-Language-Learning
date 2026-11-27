#include <stdio.h>

int main(void)
{
    int age = 18;
    float height = 175.5f;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Height: %f\n", height);
    printf("Grade: %c\n", grade);

    return 0;
}

/*
代码中的三个新知识

格式控制符	          对应数据类型	          用途
%d	                    int	              输出整数
%f	                   float	         输出浮点数
%c	                    char	          输出字符
*/
