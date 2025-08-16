#include <iostream>
#include "StrBlob.h"
#include "StrBlobPtr.h"
#include "ConstStrBlobPtr.h"

int main()
{
    StrBlob sb01({"Hello", "World", "C++", "Primer"});
    sb01.print();
    std::cout << "*****************" << std::endl;
    StrBlob sb02(sb01);
    sb02.print();
    std::cout << "*****************" << std::endl;
    StrBlob sb03({"Another", "StrBlob", "Example"});
    sb03.print();
    std::cout << "*****************" << std::endl;
    sb03 = sb01;
    sb03.print();
    return 0;
}