#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm> // sort
#include <numeric>   // accumulate
#include "Sales_item.h"

int main()
{
    std::vector<Sales_item> v;
    std::istream_iterator<Sales_item> in_iter(std::cin);
    std::istream_iterator<Sales_item> eof;

    // 读入 ISBN 号、售出的册数以及销售价格，存入 vector
    while (in_iter != eof)
        v.push_back(*in_iter++);

    if (v.empty())
    {
        // 没有输入！敬告读者
        std::cerr << "No data?!" << std::endl;
        return -1; // 表示失败
    }

    // 将交易记录按 ISBN 排序
    sort(v.begin(), v.end(), compareIsbn);

    auto l = v.begin();
    while (l != v.end())
    {
        auto item = *l; // 相同 ISBN 的交易记录中的第一个
        // 在后续记录中查找第一个 ISBN 与 item 不同者
        auto r = find_if(l + 1, v.end(),
                         [item](const Sales_item &item1)
                         {
                             return item1.isbn() != item.isbn();
                         });
        // 将范围 [l, r) 间的交易记录累加并输出
        // 输出格式：ISBN、售出的册数、总销售额和平均价格
        std::cout << std::accumulate(l, r, Sales_item(l->isbn())) << std::endl;
        // l 指向下一段交易记录中的第一个
        l = r;
    }

    return 0;
}
