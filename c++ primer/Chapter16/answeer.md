### 16.1
当编译器实例化一个模版时，它使用实际的模版实参来代替对应的模版参数来创建出模版的一个新"实例"，这些编译器生成的版本通常被称为模板的实例。
### 16.3
main.cpp: In instantiation of 'int compare(const T&, const T&) [with T = Sales_Data]':
main.cpp:33:61:   required from here
   33 |     std::cout << "Comparing Sales_Data objects: " << compare(Sales_Data(), Sales_Data()) << std::endl;
      |                                                      ~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~
main.cpp:6:11: error: no match for 'operator<' (operand types are 'const Sales_Data' and 'const Sales_Data')
    6 |     if (a < b)
      |         ~~^~~
main.cpp:10:16: error: no match for 'operator<' (operand types are 'const Sales_Data' and 'const Sales_Data')
   10 |     else if (b < a)
      |              ~~^~~
main.cpp: In function 'int compare(const T&, const T&) [with T = Sales_Data]':
main.cpp:18:1: warning: control reaches end of non-void function [-Wreturn-type]
   18 | }
      | ^
### 16.8
不是每一种类型都支持<运算符，但是只要类型支持==运算符即可，要求更低。
### 16.9
函数模板是生成函数的蓝图，类模板是生成类的蓝图
### 16.10
当编译器从我们的模版实例化出一个类时，它会重写模版，将模板参数的每个实例替换成给定的模版实参。因此一个类模版的每个实例都形成一个独立的类
### 16.11
我们应该牢记，类模版的名字不是一个类型名。类模版只有实例化后才能形成类型，而实例化总是要提供模版实参的。因此，在题干代码中直接使用 ListItem 是错误的，应该使用 ListItem<elemType> ，这才是一个类型。

这个规则有一个例外，就是在类模版作用域内，可以不提供实参，直接使用模版名。也就是说，题干代码中，类内的 List<elemType> 可简化为 List 。
```c++
template <typename elemType> class ListItem;
template <typename elemType> class List {
public:
    List<elemType>();
    List<elemType>(const List<elemType>&);
    List<elemType>& operator=(const List<elemType>&);
    ~List();
    //void insert(ListItem *ptr, elemType value);
    void insert(ListItem<elemType>* ptr, elemType value);
private:
    //ListItem* front, * end;
    ListItem<elemType>* front, * end;
};

int main(int argc, char* argv[]) {
    List<int> l();
}
```
### 16.13
由于函数模版的实例化只处理特定类型，因此，对于相等和关系运算符，对每个 BlobPtr 实例与用相同类型实例化的关系运算符建立一对一的友好关系即可。
### 16.15
由于函数模版的实例化只处理特定类型，因此，对于相等和关系运算符，对每个 Screen 实例与用相同类型实例化的关系运算符建立一对一的友好关系即可。
### 16.17
当用来声明模版类型参数时， typename 和 class 是完全等价的，都表明模版参数是一个类型。在 C++ 最初引入模版时，是使用 class 的。但为了避免与类（或类模版）定义中的 class 相混淆，引入了 typename 关键字。从字面上看，typename 还暗示了模版类型参数不必是一个类类型。因此，现在更建议使用 typename。

如本节所述，typename 还有其它用途。当在模版类型参数上使用作用域运算符 :: 来访问其成员时，如 T::value_type ，在实例化之前可能无法辨别访问的到底是 static 数据成员还是类型成员。对此，C++ 默认通过 :: 访问的是 static 数据成员。为了指明访问的是类型成员，需要在名字前使用 typename 关键字，如 typename T::value_type() ，表明 value_type 是类型成员，这里是创建一个 value_type 类型的对象，并进行初始化。
### 16.18
（a）非法。必须指出 U 是类型参数（用 typename）还是非类型参数。

（b）非法。在作用域中，模版参数名不能重用，而这里重用 T 作为函数参数名。

（c）非法。函数模版可以声明为 inline 或 constexpr 的，如同非模版函数一样。inline 或 constexpr 说明符放在模版参数列表之后，返回类型之前。

（d）非法。未定义函数模版返回类型。

（e）合法。在模版作用域中，类型参数 Ctype 屏蔽了之前定义的类型别名 Ctype。

修正：
```c++
(a) template <typename T, typename U, typename V> void f1(T, U, V);
// identifier 'U'
(b) template <typename T> T f2(int &);
// typename would be hidden
(c) template <typename T> inline T foo(T, unsigned int*);
// inline must be after template
(d) template <typename T> void f4(T, T);
// return type should be provided
(e) typedef char Ctype;
template <typename T> T f5(Ctype a);
// the typename hides this typedef
```
### 16.23
当 shared_ptr 的引用计数变为 0，需要释放资源时，才会调用删除器进行资源释放。分析查询主程序，runQueries 函数结束时，TextQuery 对象 tq 生命期结束，此时 shared_ptr 的引用计数变为 0，会调用删除器释放资源（string 的 vector），此时调用运算符被执行，释放资源，打印一条信息。由于 runQueries 是主函数最后执行的语句，因此运行效果是程序结束前最后打印出信息。
### 16.25
实例化声明，说明vecctor<string>在其他地方以及实例化

实例化定义，会实例化vector<Sales_data>所有成员
### 16.26
答案是否定的。

原因是，当我们显式实例化 vector<NoDefault> 时，编译器会实例化 vector 的所有成员函数，包括它接受容器大小参数的构造函数。vector 的这个构造函数会使用元素类型的默认构造函数来对元素进行值初始化，而 NoDefault 没有默认构造函数，从而导致编译错误。
### 16.27
```c++
template <typename T> class Stack {    };
void f1(Stack<char>);                   //(a)这是对 f1 的声明，f1 的参数是 Stack<char>，需要在这里检查实参和形参的类型是否匹配(然后调用拷贝构造函数)，
                                        //编译时就需要 Stack<char> 的定义，所以需要实例化，注意，这里就算是引用传参而不是值传参，也一样是需要实例化的，
                                        //因为需要检查引用的类型与绑定的对象的类型是否一致；
class Exercise {
    Stack<double>& rds;                 //(b)引用需要在初始化时绑定到一个相同类型的对象上，在调用这句话时，一定是想把它绑定到一个对象上，
                                        //例如在构造函数中为 rds 赋初值(必须赋初值，不然会报错)。由于在编译阶段需要检查引用类型和绑定的对象的类型是否一致，
                                        //因此需要知道 Stack<double> 的定义，所以需要实例化；
    
    Stack<int> si;                      //(c)编译时需要知道创建 si 成员需要多大空间，需要Stack<int> 的定义，因此需要实例化；
};
int main() {
    Stack<char>* sc;                    //(d)指针与引用不同，它不是一定要初始化，这里 sc 没有初始化，它就是一个未定义的地址。它不需要 Stack<char> 的定义，
                                        //所以不需要实例化。如果初始化了，那么才需要检查指针类型与初始化的对象类型是否一致，这样才需要 Stack<char> 的定义，
                                        //才需要对 Stack 实例化。
    
    f1(*sc);                            //(e)不需要实例化
    
    int iObj = sizeof(Stack<string>);   //(f)需要实例化，因为需要知道 Stack<string> 的定义，才能知道 sizeof(Stack<string>)。
}
```
### 16.31
shared_ptr 是运行时绑定删除器，而 unique_ptr 则是编译时绑定删除器。unique_ptr 有两个模版参数，一个是所管理的对象类型，另一个是删除器类型。因此，删除器类型是 unique_ptr 的一部分，在编译时就可知道，删除器可直接保存在 unique_ptr 对象中。通过这种方式，unique_ptr 避免了间接调用删除器的运行时开销，而编译时还可以将自定义的删除器，如 DebugDelete 编译为内联形式（练习16.28 中的 Deleter 删除器也是这个原理）。
### 16.32
对一个函数模版，当我们调用它时，编译器会利用调用中的函数实参来推断其模版参数，这些模版实参实例化出的版本与我们的函数调用应该是最匹配的版本，这个过程就称为模版实参推断。
### 16.33
1. const 转换：可以将一个非 const 对象的引用（或指针）传递给一个 const 对象（或指针）形参。
2. 数组或函数到指针的转化：如果函数形参不是引用类型，则可以对数组或函数类型的实参应用正常的指针的转化。一个数组实参可以转换为一个指向其首元素的指针。类似的，一个函数实参可以转换为一个该函数类型的指针。
### 16.34
在模版实参推断过程中，允许数组到指针的转化。但是，如果形参是一个引用，则数组不会转换为一个指针。因此，两个调用都是非法的。
### 16.35
（a）调用合法。因为 calc 的第二个参数是 int 类型，所以可以进行正常的类型转换，将 char 转换为 int。而 T 被推断为 char。

（b）调用合法。同（a），对 f 进行正常的类型转换，将 float 转换为 int，T 被推断为 double。

（c）调用合法。c 和 'c' 都是 char 类型，T 被推断为 char。

（d）调用非法。d 为 double 类型，f 为 float 类型，T 无法推断为适配的类型。
### 16.36
(a) f1(int *,int *)
(b) f2(int *,int *)
(c) f1(const int *,const int *)
(d) f2(const int *,const int *)
(e) 报错，因为const int是底层const，无法忽略，因此int和int类型不同
(f) f2(int *,const int*)
### 16.37
```c++
auto m = max<double>(11,11.1);
```
### 16.38
make_shared需要模版实参来判断该模版需要创建多大的内存空间，make_shared允许实参为空，这样调用模板参数的默认构造函数。如果不提供模板参数，则不知道需要多大的内存空间。
### 16.39
```c++
#include <iostream>

template<typename T>
int compare(const T &v1, const T &v2) {
    if (v1 < v2) { return -1; }
    if (v2 < v1) { return 1; }
    return 0;
}

template<>
int compare(const char *const &v1, const char *const &v2) {
    return strcmp(v1, v2);
}

int main() {
    // 由于没有指定模板实参，编译器推断出 T 为 char (&)[5] (如
    // 果两个字符串字面量长度不同，实例化会出错)
    std::cout << compare("hello", "world") << std::endl;
    // 显式指定模板类型参数，使用特化版本，字符数组自动转为指
    // 针，两个字符串长度不同也不会有问题
    std::cout << compare<const char *>("c++", "primer") << std::endl;
    std::cout << compare<std::string>("c++", "primer") << std::endl;

    return 0;
}
```
### 16.40
合法，对可以传递的实参类型需要支持+运算符，推到表达式为右值，因此返回类型是容器的元素类型，而非引用
### 16.42
a. int &  
b. const int &  
c. int
### 16.43
T 被推断为 int& ，val 经过引用折叠被确定为 int& 。
### 16.44
不管 g 的函数参数的声明为 T 或 const T& ，第一题的三个调用中 T 的类型都是 int 。在 g 的函数参数的声明为 T 时，第一题的三个调用中 val 的类型都是 int ；在 g 的函数参数的声明为 const T& 时，第一题的三个调用中 val 的类型都是 const int& 。
### 16.45
（a）对 g(42) ，T 被推断为 int ，val 的类型为 int&& 。因此，v 是 int 的 vector。

（b）对 g(i) ，T 被推断为 int& ，val 的类型为 int&（int& && ==> int&）。因此，v 是 int& 的 vector（引用不能作为容器的元素）。

回忆一下，vector 是如何保存它的元素的？它管理动态内存空间，在其中保存它的元素。这就需要维护指向动态内存空间的指针，此指针的类型应该就是容器元素的类型。但注意，引用不是对象，没有实际地址，因此不能定义指向引用的指针（参见 2.3.2 节）。因此，不能定义指向 int& 的指针，也就不能声明 int& 的 vector，编译失败。
### 16.46
此循环将 elem 开始的内存中的 string 对象移动到 dest 开始的内存中。

每个循环步中，调用 construct 在新内存空间中创建对象。若第二个参数是一个左值，则进行拷贝动作。但在上面的代码中，用 std::move 将一个左值转换为右值引用，这样，construct 会调用 string 的移动构造函数将数据从旧内存空间移动而不是拷贝到新的内存空间中，避免了不必要的数据拷贝操作。
### 16.49
g(42) 调用 g(T)  
g(p) 调用 g(T *)  
g(ci) 调用 g(T)  
g(p2) 调用 g(T *)  
f(42) 调用 f(T)  
f(p) 调用 f(T)  
f(ci) 调用 f(T)  
f(p2) 调用 f(const T *)
g(42);  // type: int(rvalue) call template 3  T: int          instantiation: void g(int)
g(p);   // type: int *       call template 4  T: int          instantiation: void g(int *)
g(ci);  // type: const int   call template 3  T: const int    instantiation: void g(const int)
g(p2);  // type: const int * call template 4  T: const int    instantiation: void g(const int *)
f(42);  // type: int(rvalue) call template 1  T: int          instantiation: void f(int)
f(p);   // type: int *       call template 1  T: int *        instantiation: void f(int *)
// f(int *) is an exact match for p(int *) while f(const int *) has a conversion from int * to const int *.
f(ci);  // type: const int   call template 1  T: const int    instantiation: void f(const int)
f(p2);  // type: const int * call template 2  T：int          instantiation: void f(const int *)
### 16.50
对 5 个调用
```c++
foo(i, s, 42, d);                   // 包中有三个参数
foo(s, 42, "hi");                   // 包中有两个参数
foo(d, s);                          // 包中有一个参数
foo("hi");                          // 空包
foo(i, s, s, d);                    // 包中有三个参数
```
sizeof...(Args) 和 sizeof...(rest) 分别返回：
3 3
2 2
1 1
0 0
3 3
### 16.54
由于 print 要求函数参数类型支持 << 运算符，因此会产生编译错误。
### 16.55
将非可变参数版本放在可变参数版本之后，也属于 “定义可变参数版本时，非可变参数版本声明不在作用域中” 的情况。因此，可变参数版本将陷入无限递归。

注意，这里的无限递归并不是运行时的无限递归调用，而是发生在编译时递归的包扩展。例如，调用  
print(cout, i, s, 42)  
正常的包扩展过程是：

print(cout, s, 42)  
print(cout, 42) 调用非可变参数版本的 print  
最后一步与非可变参数版本匹配。但当非可变参数版本不在作用域中时，还会继续扩展为  
print(cout)  
这就无法与任何模版匹配了，从而产生编译错误。
### 16.57
相对于 6.2.6 节的版本，本节的版本不要求参数具有相同类型。当不知道实参数目也不知道它们的类型时，本节的版本非常有用。而 6.2.6 节的版本只能适用于相同类型的多个参数的情形，对另一种类型，就要为其编写新的版本，编程工作量大。当然，本节的版本较为复杂，需要更多模版相关的知识来确保代码正确，例如复杂的扩展模式。
### 16.59
由于 s 是一个左值，经过包扩展，它将以如下形式传递给 construct。

std::forward<string>(s)  
std::forward<string> 的结果类型是 string& ，因此，construct 将得到一个左值引用实参，它继续将此参数传递给 string 的拷贝构造函数来创建新元素。
### 16.60
make_shared 的工作过程类似 emplace_back。

它接受参数包，经过扩展，转发给 new，作为 vector 的初始化参数。
### 16.66
重载是会影响函数匹配的，也就是说，编译器在函数匹配过程中会将新的重载版本作为候选之一来选择最佳匹配。这就需要小心设计，避免实际匹配不如我们所愿。

特例化则不影响函数匹配，它并不是为编译器进行函数匹配提供一个新的选择，而是为模版的一个特殊实例提供不同于原模版的特殊定义，本质上是接管了编译器在完成函数匹配后的部分实例化工作。即，当某个模版是最佳匹配时，且需要实例为这个特殊实例时，不再从原模版进行实例化，而是直接使用这个特殊化版本。因此，特例化更为简单 —— 当一个模版不符合我们的需求时，只需设计满足需求的特例化版本即可。

### 16.67
不影响，它并不是为编译器进行函数匹配提供一个新的选择，而是为模版的一个特殊实例提供不同于原模版的特殊定义，本质上是接管了编译器在完成函数匹配后的部分实例化工作。即，当某个模版是最佳匹配时，且需要实例为这个特殊实例时，不再从原模版进行实例化，而是直接使用这个特殊化版本。因此，特例化更为简单 —— 当一个模版不符合我们的需求时，只需设计满足需求的特例化版本即可。