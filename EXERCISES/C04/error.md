C04 · 程序错误与调试
本节学习目标
1. 区分三种常见错误。
2. 看懂 GCC 编译器给出的错误信息。
3. 学会根据错误提示定位代码问题。
4. 初步使用 VS Code 和 GDB 调试程序。

一、程序中的三种常见错误
1. 语法错误（Syntax Error）
#include <stdio.h>

int main(void)
{
    int age = 18
    printf("age = %d\n", age);

    return 0;
}

少了个分号

2. 语义错误（Semantic Error）
#include <stdio.h>

int main(void)
{
    int age = "hello";

    printf("age = %d\n", age);

    return 0;
}

这里 age 是整数类型 int，但我们试图给它赋一个字符串。

3. 逻辑错误（Logical Error）
#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 20;

    int sum = a - b;

    printf("sum = %d\n", sum);

    return 0;
}

我们的目标是计算两个数的和，但代码写成了减法。

程序没有语法问题，也可以正常编译、运行。

错误类型	核心问题	                    程序能否正常运行
语法错误	代码不符合语法规则	               通常不能编译
语义错误	代码含义或使用方式不正确	可能不能编译，也可能产生异常结果
逻辑错误	程序的计算或执行思路错误	   通常能运行，但结果不正确

下一部分：逻辑错误与 GDB 调试
程序没有编译错误，也没有运行错误，但是结果不正确。

-g：生成供 GDB 使用的调试信息。

一、认识当前状态
你可以把程序想象成一辆正在行驶的汽车：
- run：启动汽车。
- break main：在 main 函数入口设置一个检查站。
- 程序运行到检查站：自动停车。
- next：让汽车向前行驶一小步。
- print：查看汽车当前的状态。

2. GDB 基础调试     也就是debug
命令	作用
break main	在 main 函数设置断点
run	               启动程序
next	           逐行执行
print a	          查看变量 a
info breakpoints	查看断点
continue	         继续运行

gdb .\debug_demo.exe  进入gdb

断点同样可以用图形化操作