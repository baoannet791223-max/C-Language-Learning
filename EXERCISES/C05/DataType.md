本节知识点总结
你已经掌握了：
1. int、float、double、char 等基本数据类型。
2. sizeof 运算符。
3. float 与 double 的精度区别。
4. signed 与 unsigned 的区别。
5. unsigned 整数的溢出和下溢回绕。
6. signed 整数溢出属于未定义行为。

C05 · 数据类型与变量
课程目录： E:\C_Learning\EXERCISES\C05

你可以把数据类型理解为：给计算机指定一个存储规则，告诉它应该如何解释和处理一段数据。

二、C 语言的三种基本数据类型
1. int —— 整数类型
用于保存整数。
int age = 18;
int year = 2026;
int number = -100;
特点：
- 可以保存正整数。
- 可以保存负整数。
- 可以保存零。
- 不能直接保存小数部分。

2. float —— 单精度浮点类型
float height = 175.5f;
float temperature = 36.5f;
注意这里的 f：
175.5f
它表示这是一个 float 类型的浮点常量。

3. char —— 字符类型
用于保存单个字符。
char grade = 'A';
char letter = 'B';
char symbol = '#';
字符使用单引号。
而：
char letter = "A";
使用了双引号，这是字符串，不是单个字符，不能直接赋给 char 变量。
data_types.c实验

C05 · 第二部分：sizeof 运算符
一、认识 sizeof
在 C 语言中，sizeof 是一个运算符，用于计算某个数据类型或对象占用的内存大小。
sizeof(int)
意思是：计算 int 类型占用多少字节。

1. sizeof(int)
返回 int 类型占用的字节数。
sizeof_demo.c实验
2. %zu
这是用于输出 sizeof 返回值的格式控制符，因为 sizeof 的结果类型是 size_t。

类型	               常见大小	        主要用途
char	                1 字节	         字符
int	                    4 字节	         整数
float	                4 字节	      单精度浮点数
double	                8 字节	      双精度浮点数

C05 · 第三部分：整数类型
不同整数类型可以表示不同范围的数值，也可能占用不同的内存空间。
C 语言常见的整数类型有：
类型	                常见大小	           用途
short	                2 字节	          较小范围整数
int	                    4 字节	            普通整数
long	              4 或 8 字节	       较大范围整数
long long	            8 字节	           更大范围整数
二、有符号和无符号整数
这里有两个非常重要的关键字：
- signed：有符号整数，可以表示正数、负数和零。
- unsigned：无符号整数，只能表示非负数。

integer_demo.c实验

C05 · 第四部分：整数溢出
1. 什么是整数溢出？
可以把整数类型想象成一个容量有限的储物盒。
如果盒子最多只能容纳 100 个物品，你却放进去 101 个，就超出了容量。
这就类似于整数溢出。
overflow_demo.c实验
这里认识一个新知识：
UINT_MAX
它来自 limits.h，表示 unsigned int 能表示的最大值。

类型	         超出最大值后的行为
unsigned int	 按模 \(2^N\) 回绕
signed int	      未定义行为（UB）

整数类型的转换（Type Conversion）
自动类型转换（Automatic Type Conversion）。
int a = 10;
double b = 3.5;

double result = a + b;
计算过程：
1. a 是 int，值为 10。
2. b 是 double，值为 3.5。
3. 两种不同类型参与运算时，C 语言会进行通常算术转换。
4. a 自动转换为 double，也就是 10.0。
5. 执行 10.0 + 3.5，结果为 13.5。
可以理解为：为了让两个不同类型的数字能够一起计算，C 语言先把它们转换成合适的共同类型。
type_conversion.c实验

C05 下一个知识点：强制类型转换
(目标类型)表达式
例如：
int a = 10;

double b = (double)a;
这里 (double)a 就是把 a 转换成 double。