#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v01;                         // 默认初始化
    std::vector<int> v02{1, 2, 3, 4, 5};          // 列表初始化  1,2,3,4,5
    std::vector<int> v03(v02);                    // 拷贝初始化  1,2,3,4,5
    std::vector<int> v04(v03.begin(), v03.end()); // 范围初始化  1,2,3,4,5
    std::vector<int> v05 = {1, 2, 3, 4, 5};       // 赋值初始化  1,2,3,4,5
    std::vector<int> v06(5, 10);                  // 重复值初始化  10,10,10,10,10
    std::vector<int> v07(10);                     // 指定大小初始化  0,0,0,0,0,0,0,0,0,0
    std::vector<int> v08 = v02;                   // 赋值拷贝初始化  1,2,3,4,5
    return 0;
}