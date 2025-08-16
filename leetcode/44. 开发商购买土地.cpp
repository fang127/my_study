#include <iostream>
#include <vector>
#include <cstdint>
#include <stdlib.h>
/*
    【题目描述】

在一个城市区域内，被划分成了n * m个连续的区块，每个区块都拥有不同的权值，代表着其土地价值。目前，有两家开发公司，A 公司和 B 公司，希望购买这个城市区域的土地。

现在，需要将这个城市区域的所有区块分配给 A 公司和 B 公司。

然而，由于城市规划的限制，只允许将区域按横向或纵向划分成两个子区域，而且每个子区域都必须包含一个或多个区块。

为了确保公平竞争，你需要找到一种分配方式，使得 A 公司和 B 公司各自的子区域内的土地总价值之差最小。

注意：区块不可再分。

【输入描述】

第一行输入两个正整数，代表 n 和 m。

接下来的 n 行，每行输出 m 个正整数。

输出描述

请输出一个整数，代表两个子区域内土地总价值之间的最小差距。
*/

int main()
{
    int n, m;
    std::cin >> n >> m;
    std::vector<std::vector<int>> vec(n, std::vector<int>(m, 0));
    int sum = 0; // 总价值
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            std::cin >> vec[i][j];
            sum += vec[i][j];
        }
    }

    // 统计行价值
    std::vector<int> horizontal(n, 0);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            horizontal[i] += vec[i][j];
        }
    }

    // 统计列价值
    std::vector<int> vertical(m, 0);
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            vertical[i] += vec[j][i];
        }
    }

    int result = INT32_MAX;
    int temp01;
    // 按行划分
    for (int i = 0; i < n; ++i)
    {
        temp01 += horizontal[i];
        result = std::min(result, std::abs(sum - temp01 - temp01));
    }

    int temp02;
    // 按行划分
    for (int i = 0; i < m; ++i)
    {
        temp02 += vertical[i];
        result = std::min(result, std::abs(sum - temp02 - temp02));
    }

    std::cout << result << std::endl;

    return 0;
}