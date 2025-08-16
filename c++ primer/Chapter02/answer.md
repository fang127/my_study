# 第二章
### 2.1
int、long、long long 和 short 表示整型类型，C语言规定它们表示数的范围 short ≤ int ≤ long ≤ long long。其中，数据类型 long long 是在 C11 中新定义的；  
除去布尔型和扩展的字符型之外，其它整型可以划分为**带符号的（signed）和无符号的（unsigned）**两种。带符号类型可以表示正数、负数和 0，无符号类型则仅能表示大于等于 0 的值。类型 int、short、long 和 long long 都是带符号的，通过在这些类型名前添加 unsigned 就可以得到无符号类型，例如 unsigned long。类型 unsigned int 可以缩写为 unsigned；  
float 和 double 用于表示浮点数，其中，float 表示单精度浮点数，double 表示双精度浮点数。执行浮点数运算选用 double，这是因为 float 通常精度不够而且双精度浮点数和单精度浮点数的计算代价相差无几。事实上，对于某些机器来说，双精度运算甚至比单精度还快。long double 提供的精度在一般情况下是没有必要的，况且它带来的运算时消耗也不容忽视。  
### 2.2
利率（rat）：float，本金（principal）：long long，付款（payment）：long long。  
利率一般是小数点后保留四位有效数字，float 合适；本金和付款使用最大的带符号整型表示。
### 2.3
32，4294967264，32，-32，0，0
### 2.4
正确
### 2.5  
(a) char字符字面值，wchar_t,字符串字面值，宽字符串字面值  
(b) int，unsigned int,long,unsigned long,int(八进制),int(16进制)
(c) double，float，long double
(d) int，unsigned int，double，double
### 2.6
都是八进制整形字面值，但是后者的month复制错误，八进制每个位只能0-7
### 2.7
(a) 字符串字面值，包含两个八进制转义序列
(b) long double,float,long double  都是浮点字面值
### 2.10
global_str="/0";global_int = 0;local_int未定义；local_str=“/0";
### 2.11
```c++
extern int ix = 1024;		// 定义
int iy;		// 声明并定义 iy
extern int iz;		// 声明 iz 而非定义 iz		
```
### 2.12
```c++
int double = 3.14;	// 错误，c++关键字 double 不能作为标识符
int _;	// 正确
int catch-22;	// 错误，标识符由数字、字母和下划线组成
int 1_or_2 = 1;	// 错误，标识符必须以字母或下划线开头
double Double = 3.14;	// 正确，标识符长度没有限制，大小写敏感
```
### 2.13
100
### 2.14
100 55
### 2.15
```c++
#include <iostream>

int main () {
    // 正确，隐式的将 1.01 转换成 1
    int ival= 1.01;
    // 错误，除 2.4.1 节（第 55 页）和 15.2.3 节（第 534 页）将
    // 要介绍的两种例外情况，引用的类型都要和与之绑定的对象严格匹
    // 配。而且，引用只能绑定在对象上，而不能与字面值或某个表达式的
    // 计算结果绑定在一起，相关原因将在 2.4.1 节详述
    int &rval1 = 1.01;
    // 正确
    int &rval2 = ival;
    // 错误，引用必须被初始化,且初始值必须是一个对象
    int &rval3;

    return 0;
}
```
### 2.16
都正确
### 2.17
10,10
### 2.19
引用（reference）为对象起了另外一个名字，引用类型引用（refers to）另外一种类型。  
指针（pointer）是"指向（point to）"另外一种类型的复合类型。与引用类似，指针也实现了对其他对象的间接访问。然而指针与引用相比又有很多不同点。
>1.指针本身就是一个对象，允许对指针赋值和拷贝，而且在指针的生命周期内它可以先后指向几个不同的对象；  
>2.指针无须在定义时赋初值；  
>3.因为引用不是对象，没有实际地址，所以不能定义指向引用的指针；  
>4.除特殊情况，其他所有指针的类型都要和它所指向的对象严格匹配；    
### 2.20
将$𝑖$的值修改为$𝑖^2$
### 2.21
```c++
int i = 0;
double *dp = &i;	// 错误，指针的类型都要和它所指向的对象严格匹配
int *ip = i;		// 错误，忘记取地址符 &
int *p = &i;		// 正确
```
### 2.22
if (p) means if the pointer p is not null.  
if (*p) means if the object pointed by the pointer is not false (which means the object is not null or zero etc.).
### 2.23
No, you can't. Because it would be expensive to maintain meta data about what constitutes a valid pointer and what doesn't, and in C++ you don't pay for what you don't want.  
However, a smart pointer can be used to tell if it points to a valid object.[here](https://github.com/jaege/Cpp-Primer-5th-Exercises/blob/master/ch2/2.23.md).
### 2.24
void *指针可以指向任何对象，lp为long *，必须严格匹配所指对象，对象为int *
### 2.25
int *，int,int &,int,int *,int*,int
### 2.26
a.未初始化 b.正确 c.正确 d.错误，不可以sz是一个const对象，不可以改变其值
### 2.27
（a）是非法的，非常量引用 r 不能引用字面值常量 0。  
（b）是合法的，p2 是一个常量指针，p2 的值永不改变，即 p2 永远指向变量 i2。  
（c）是合法的，i 是一个常量，r 是一个常量引用，此时 r 可以绑定到字面值常量 0。  
（d）是合法的，p3 是一个常量指针，p3 的值永不改变，即 p3 永远指向变量 i2；同时 p3 指向的是常量，即我们不能通过 p3 改变所指对象的值。  
（e）是合法的，p1 指向一个常量，即我们不能通过 p1 改变所指对象的值。  
（f）是非法的，引用本身不是对象，因此不能让引用恒定不变。   
（g）是合法的，i2 是一个常量，r 是一个常量引用。
### 2.28
（a）是非法的，cp 是一个常量指针，因其值（指针存储的那个地址）不能被改变，所以必须被初始化。  
（b）是非法的，cp2 是一个常量指针，因其值不能被改变，所以必须被初始化。  
（c）是非法的，ic 是一个常量，因其值不能被改变，所以必须被初始化。  
（d）是非法的，p3 是一个常量指针，因其值不能被改变，所以必须被初始化；同时 p3 所指向的是常量，即我们不能通过 p3 改变所指对象的值。  
（e）是合法的，但是 p 没有指向任何实际的对象。  
### 2.29
（a）是合法的，常量 ic 的值赋给了非常量 i。  
（b）是非法的，普通指针 p1 指向了一个常量，从语法上说，p1 的值可以随意改变，显然是不合理的。因为 p1 改变了，p1 所指对象因该也同时改变了，但是 p1 所指对象是一个常量，不能被修改。  
（c）是非法的，普通指针 p1 指向了一个常量，错误情况与上一条类似。  
（d）是非法的，p3 是一个常量指针，不能被赋值。  
（e）是非法的，p2 是一个常量指针，不能被赋值。  
（f）是非法的，ic 是一个常量，不能被赋值。  
### 2.30
顶层，无，无，无，底层，顶层，底层
### 2.31
正确，错误（p2为底层const，p1无const），正确（底层const），错误（顶层和底层），正确（顶层和底层）
### 2.32
```c++
int null = 0, *p = &null;
// 或
int null = 0, *p = nullptr;
```
### 2.33
```c++
a = 42; // 合法。a为int
b = 42; // 合法，b为int
c = 42; // 合法，c为int
d = 42; // 错误，d为int*
e = 42; // 错误，e为const int *
g = 42; // 错误，g为const int ，不可赋值
```
### 2.36
a和b为int，值为4和4    
c为int，4  
d为int &，4  
### 2.37
a和b为int，3和4  
c为int，3  
d为int &，3
### 2.38
auto 和 decltype 的区别主要有三方面：
1. auto 类型说明符用编译器计算变量的初始值来推断其类型，而 decltype 虽然也让编译器分析表达式并得到它的类型，但是不实际计算表达式的值。
2. 编译器推断出来的 auto 类型有时候和初始值的类型并不完全一样，编译器会适当地改变结果类型使其更符合初始化规则。例如，auto 一般会忽略掉顶层 const，而把底层 const 保留下来。与之相反，decltype 会保留变量的顶层 const。auto不会保留引用，decltype会保留引用&。
3. 与 auto 不同，decltype 的结果类型与表达式密切相关，如果变量名加上了一对括号，则得到的类型与不加括号时会有不同。如果 decltype 使用的是一个不加括号的变量，则得到的结果就是该变量的类型；如果给变量加上了一层或多层括号，则编译器将推断得到引用类型。