#include <iostream>
#include "StrBlob.h"
#include "StrBlobPtr.h"
#include "ConstStrBlobPtr.h"

int main()
{
    StrBlob sb01({"Hello", "World", "C++", "Primer"});
    StrBlob sb02 = {"Hello", "World", "C++", "Primer"};

    std::cout << "Test operator==: " << std::boolalpha << (sb01 == sb02) << std::endl;
    std::cout << "Test operator!=: " << std::boolalpha << (sb01 != sb02) << std::endl;
    std::cout << "Test operator<: " << std::boolalpha << (sb01 < sb02) << std::endl;
    std::cout << "Test operator[]:" << std::boolalpha << sb01[0] << std::endl;

    StrBlobPtr sbp01(sb01);
    StrBlobPtr sbp02(sb02);
    std::cout << "Test StrBlobPtr operator==: " << std::boolalpha << (sbp01 == sbp02) << std::endl;
    std::cout << "Test StrBlobPtr operator!=: " << std::boolalpha << (sbp01 != sbp02) << std::endl;
    std::cout << "Test StrBlobPtr operator<: " << std::boolalpha << (sbp01 < sbp02) << std::endl;
    std::cout << "Test operator[]:" << std::boolalpha << sbp01[0] << std::endl;
    sbp01 += 2;
    std::cout << "Test StrBlobPtr operator+=: " << std::boolalpha << sbp01[1] << std::endl;
    sbp01 -= 1;
    std::cout << "Test StrBlobPtr operator-=: " << std::boolalpha << sbp01[0] << std::endl;
    sbp01++;
    std::cout << "Test StrBlobPtr operator++: " << std::boolalpha << sbp01[0] << std::endl;
    --sbp01;
    std::cout << "Test StrBlobPtr operator--: " << std::boolalpha << sbp01[0] << std::endl;
    sbp01 = sbp01 + 1;
    std::cout << "Test StrBlobPtr operator+: " << std::boolalpha << sbp01[0] << std::endl;
    sbp01 = sbp01 - 1;
    std::cout << "Test StrBlobPtr operator-: " << std::boolalpha << sbp01[0] << std::endl;

    std::cout << "Test StrBlobPtr dereference operator: " << std::boolalpha << *sbp01 << std::endl;
    std::cout << "Test StrBlobPtr member access operator: " << std::boolalpha << sbp01->size() << std::endl;

    ConstStrBlobPtr csbp01(sb01);
    ConstStrBlobPtr csbp02(sb02);
    std::cout << "Test ConstStrBlobPtr operator==: " << std::boolalpha << (csbp01 == csbp02) << std::endl;
    std::cout << "Test ConstStrBlobPtr operator!=: " << std::boolalpha << (csbp01 != csbp02) << std::endl;
    std::cout << "Test ConstStrBlobPtr operator<: " << std::boolalpha << (csbp01 < csbp02) << std::endl;
    std::cout << "Test ConstStrBlobPtr operator[]: " << std::boolalpha << csbp01[0] << std::endl;
    csbp01 += 2;
    std::cout << "Test ConstStrBlobPtr operator+=: " << std::boolalpha << *csbp01 << std::endl;
    csbp01 -= 1;
    std::cout << "Test ConstStrBlobPtr operator-=: " << std::boolalpha << *csbp01 << std::endl;
    csbp01++;
    std::cout << "Test ConstStrBlobPtr operator++: " << std::boolalpha << *csbp01 << std::endl;
    --csbp01;
    std::cout << "Test ConstStrBlobPtr operator--: " << std::boolalpha << *csbp01 << std::endl;
    csbp01 = csbp01 + 1;
    std::cout << "Test ConstStrBlobPtr operator+: " << std::boolalpha << *csbp01 << std::endl;
    csbp01 = csbp01 - 1;
    std::cout << "Test ConstStrBlobPtr operator-: " << std::boolalpha << *csbp01 << std::endl;
    std::cout << "Test ConstStrBlobPtr dereference operator: " << std::boolalpha << *csbp01 << std::endl;
    std::cout << "Test ConstStrBlobPtr member access operator: " << std::boolalpha << csbp01->size() << std::endl;

    return 0;
}