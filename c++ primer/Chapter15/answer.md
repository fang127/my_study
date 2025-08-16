### 15.1
在类中被声明为 virtual 的成员，基类希望这种成员在派生类中重定义。除了构造函数外，任意非 static 成员都可以为虚成员。
### 15.2
protected 为受保护的访问说明符。protected 成员可以被该类的成员、友元和派生类成员（非友元）访问，而不可以被该类类型的普通用户访问。而 private 成员只能被基类的成员和友元访问，派生类不能直接访问。
### 15.4
a不正确，不可继承自身，因为只要已经被定义的类才可以做为基类

c不正确，类的声明不可以包含派生列表。
### 15.8
静态类型：是变量声明时的类型或表达式生成的类型

动态类型：是变量或表达式表示的内存中的对象的类型
### 15.9
```c++
class Base { /* ... */};
class Derived : public Base { /* ... */}
Derived d;
Base *baseP = &d;
Base &baseRef = d;
Derived *drivedP = &d;
Base *baseP2 = drivedP;
```
baseP, baseRef 和 baseP2 的静态类型与其动态类型不一致
### 15.10
我们通常可以将一个派生类对象当作其基类对象来使用。

类型 ifstream 继承自 istream 。因此，我们可以像使用 istream 对象一样来使用 ifstream 对象。也就是说，我们是如何使用 cin 的，就可以同样地使用这些类的对象。例如，可以对一个 ifstream 对象调用 getline，也可以使用 >> 从一个 ifstream 对象中读取数据。

read 函数是 istream 的成员，但是 ifstream 是 istream 的派生类。因此，istream（基类）通过引用可以绑定到 ifstream（派生类）的对象上。
### 15.12
override：在 C++11 新标准中我们可以使用 override 关键字来说明派生类中的虚函数。这么做的好处是在使得我们的意图更加清晰，即明确地告诉编译器我们想要覆盖掉基类中已存在的虚函数。如果定义了一个函数与基类中的名字相同但是形参列表不同，在不使用 override 关键字的时候这种定义是合法的，在使用了 override 关键字之后这种行为是非法的，编译器会提示出错。

final：如果我们将某个函数定义成 final，则不允许后续的派生类来覆盖这个函数，否则会报错。

因此，同时将一个成员函数声明成 override 和 final 能够使我们的意图更加清晰。
### 15.13
派生类 derived 中的 print 函数体中想调用基类 base 中的虚函数 print。然而，在派生类 derived 中的 print 函数体中却忽略了作用域运算符 :: ，这样做的结果是该 print 调用将被解析为对派生类 derived 的 print 函数自身的调用，从而导致无限递归。

derived 的成员函数 print 修改为：
```c++
void print(ostream &os) { base::print(os); os << " " << i; }
```
### 15.14
a. base
b. derived
c. base
d. base
e. base
f. derived
### 15.18
```c++
Base *p = &d1;			// d1的类型是Pub_Derv，合法
// 如果是保护或私有继承，则派生类不能向基类转换
p = &d2;				// d2的类型是Priv_Derv,非法
p = &d3;				// d3的类型是Prot_Derv，非法
p = &dd1;				// dd1的类型是Derived_from_Public，合法
p = &dd2;				// dd2的类型是Derived_from_Private，非法
p = &dd3;				// dd3的类型是Derived_from_Protected，非法
```
### 15.19
无论D以什么方式继承B，其成员函数和友元都能使用派生类到基类的转换。因此，Pub_Derv, Pro_Derv和Priv_Derv类中都合法。
如果D继承B的方式是共有的或受保护的，则D的派生类成员和友元可以使用D向B的类型转换，反之，如果D继承B是私有的，则不能使用，因此，Derived_from_Public合法，Derived_from_Private和Derived_from_Protected都不合法。 
### 15.24
作为基类，被其它类继承的类需要有虚析构函数，基类的析构函数定义为虚函数，可以允许子类中的对象动态销毁。
### 15.25
在我的编译器（g++ c++14）中，去除掉Disc_quote的默认构造函数，再定义Bulk_quote报错：

'Bulk_quote::Bulk_quote()' is implicitly deleted because the default definition would be ill-formed:

因为Disc_quote有自定义的构造函数，如果不显示声明，编译器不会再生成默认构造函数，这将阻止其子类生成默认构造函数，因此基类的默认构造函数应该显式声明，以便子类在执行默认构造函数的时候调用。
### 15.29
程序产生的结果会有差异。因为当通过 Quote 类型的对象调用虚函数 net_price 时，不实行动态绑定，调用的是 Quote 类中定义的版本；而通过 Quote 类型的指针调用虚函数 net_price，实行动态绑定，而该指针实际指向 Bulk_quote 类中定义的版本。
### 15.31
Query(s1) | Query(s2) & ~ Query(s3);
//  WordQuery, NotQuery, AndQuery, OrQuery, Query
Query(s1) | (Query(s2) & ~ Query(s3));
// WordQuery, NotQuery, AndQuery, OrQuery, Query
(Query(s1) | (Query(s2)) | (Query(s3) & Query(s4));
 // WordQuery, AndQuery, OrQuery, Query
### 15.32
-- 拷贝：当Query对象被拷贝时，会调用合成的拷贝构造函数，拷贝Query的数据成员，成员q由于是shared_ptr，其引用计数会加1.

-- 移动：当Query对象被移动时，会调用合成移动构造函数，会移动数据成员到新的对象。在这个例子中，新对象中的shared_ptr会指向原对象的shared_ptr所指向的地址，新对象的shared_ptr的引用计数加1，原对象的shared_ptr的引用计数减1。

-- 赋值：调用合成的赋值函数，结果与拷贝操作相同。

-- 销毁：调用合成的析构函数，shared_ptr的引用计数减1，如果其引用计数减至0，则会释放它指向的内存。
### 15.33
Query_base 是一个虚基类，不允许直接声明其对象。

当其派生类对象进行这些操作时，会调用 Query_base 的相应控制成员。而 Query_base 没有定义自己的拷贝/移动控制成员，实际上 Query_base 没有任何数据成员，无需定义这些操作。因此，进行这些操作时，执行默认语义，什么也不会发生。
### 15.34
a. Query q = Query("firey") & Query("bird") | Query("wind");

Query::Query(std::string& s) s分别是"firey", "bird", "wind"

WordQuery::WordQuery(const std::string& s) s分别是"firey", "bird", "wind"

AndQuery::AndQuery(const Query& left, const Query& right)

BinaryQuery::BinaryQuery(const Query &l, const Query& r, std::string s)

Query::Query (std::shared_ptr<Query_base> query) // when call q->eval, q->rep

OrQuery::OrQuery(const Query& left, const Query& right)

BinaryQuery::BinaryQuery(const Query &l, const Query& r, std::string s)

Query::Query (std::shared_ptr<Query_base> query)

b. cout << q

在operator<<函数中调用的是Query的rep() ；

Query中的rep调用OrQuery中继承Query_base的rep，因为生成对象q调用的是”|“运算返回的Query。但OrQuery中没有定义rep，因此调用的是Binary_Query中的rep;

Binary_Query中的rep由lhs和rhs调用。lhs调用的是AndQuery中的rep，rhs调用的是Word_Query中的rep；

AndQuery中调用的是Binary_Query中的rep；

Binary_Query中的rep调用的是Word_Query中的rep。

c q.eval() 所调用的eval

Query中的eval调用的是Query_base中的eval。

但这里Query_base指向的是OrQuery，所以调用的是OrQuery中的eval。
### 15.37
书中的实现方式是用 Query 类封装了 Query_base 指针，管理实际查询处理用到的不同 Query 类型对象。

如果不使用 Query 类，则涉及使用 Query 类型的地方，都要改成 Query_base 指针。如创建单个词查询时，就必须创建 WordQuery 类而不是 Query 对象。几个重载的布尔运算符也不能再针对 Query 对象，而需针对 Query_base 指针，从而复杂的查询请求无法写成目前的简单形式，而需逐个运算完成，将结果赋予 Query_base 指针，然后再进行下一步运算。资源管理方面也需要重新设计。

因此，当前的设计仍是最佳方式。
### 15.38
第一条声明不合法，因为 BinaryQuery 中的 eval 是纯虚函数。

第二条声明不合法，不能将 Query 转换为 AndQuery。

第三条声明不合法，不能将 Query 转换为 OrQuery。
### 15.40
OrQuery 的 eval 从 lhs 和 rhs 获取范围来构造 set（或向其插入），而 set 的构造和插入操作可以正确处理空范围，因此无论 lhs 和 rhs 的结果是否为空集，eval 都能得到正确结果。
