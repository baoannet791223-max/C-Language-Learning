gcc编译阶段
第一步：预处理（Preprocessing）：
处理源代码中的预处理指令，例如：
#include <stdio.h>
#define PI 3.14159
预处理器会处理头文件包含、宏替换、条件编译等操作，生成预处理后的源代码。
例如，#include <stdio.h> 会让预处理器处理并展开对应头文件的内容。
第二步：编译（Compilation）：
将预处理后的 C 语言代码转换为汇编语言代码。
第三步：汇编（Assembly）：
将汇编语言转换为机器指令，生成目标文件（Object File）。
hello.c → hello.s → hello.o
第四步：链接（Linking）：
将目标文件以及所需要的库代码等组合起来，解决外部符号引用，生成最终的可执行文件。
hello.o + C标准库等 → hello.exe
整体流程：

hello.c
   │
   ▼
预处理（Preprocessing）
   │
   ▼
预处理后的源代码
   │
   ▼
编译（Compilation）
   │
   ▼
hello.s（汇编代码）
   │
   ▼
汇编（Assembly）
   │
   ▼
hello.o（目标文件）
   │
   ▼
链接（Linking）
   │
   ▼
hello.exe（可执行文件）

1.预处理
gcc -E compile_demo.c -o compile_demo.i
gcc：调用 GCC。
-E：只执行预处理，不继续编译。
compile_demo.c：输入的源文件。
-o compile_demo.i：指定输出文件名称。 

此时C02有两个文件：
compile_demo.c
compile_demo.i
.i就是预处理后的源代码

2.编译
gcc -S compile_demo.c -o compile_demo.s
此时C02有三个文件
compile_demo.c
compile_demo.i
compile_demo.s
.s：汇编语言代码
.s中 call 函数 表示调用

3.汇编
gcc -c compile_demo.c -o compile_demo.o
此时C01有四个文件
compile_demo.c
compile_demo.i
compile_demo.s
compile_demo.o
其中 .o 是目标文件（Object File）里面已经包含机器指令，但还不是最终可以直接运行的完整程序。


4.链接
gcc compile_demo.o -o compile_demo.exe
gcc：调用 GCC。
compile_demo.o：输入目标文件。
-o：指定输出文件
compile_demo.exe：最终生成的可执行文件。
此时C02出现exe执行文件


GCC命令
gcc -E	预处理
gcc -S	生成汇编文件
gcc -c	生成目标文件
gcc xxx.o -o xxx.exe	链接生成可执行文件


函数声明	告诉编译器函数如何使用
函数实现	真正定义函数具体如何工作
函数调用	在程序中使用这个函数

