
#include <stdio.h> /*include <stdio.h>这是预处理指令 该行告诉编译器吧stdio.h中的内容包含在当前程序中*/

int main(void) /*定义主函数main 也是程序的入口 int：表示程序返回一个整数 main：主函数 void：表示不接受参数*/
{              /*花括号表示代码块的开始和结束*/
    printf("My name is C learmer!\n");
    printf("I am learning programming!\n"); /*这是输出语句   printf：输出函数 双引号：表示字符串 \n：换行符  ；：语句结束标志*/

    return 0;  /*表示主函数执行结束 并向操作系统返回状态码0*/
}
