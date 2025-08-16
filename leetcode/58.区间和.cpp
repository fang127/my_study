#include <iostream>
#include <vector>
/*
    题目描述

    给定一个整数数组 Array，请计算该数组在每个指定区间内元素的总和。

    输入描述

    第一行输入为整数数组 Array 的长度 n，接下来 n 行，每行一个整数，表示数组的元素。随后的输入为需要计算总和的区间，直至文件结束。

    输出描述

    输出每个指定区间内元素的总和。
*/
int main()
{
    int n = 0, a = 0;
    std::cin >> n;
    std::vector<int> v(n, 0);
    std::vector<int> result(n, 0);
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> a;
        v[i] = a;
        sum += v[i];
        result[i] = sum;
    }

    int beg, end;
    int value = 0;
    while (std::cin >> beg >> end)
    {
        if (beg == 0)
        {
            value = result[end];
        }
        else
        {
            value = result[end] - result[beg - 1];
        }
        std::cout << value << std::endl;
    }

    return 0;
}