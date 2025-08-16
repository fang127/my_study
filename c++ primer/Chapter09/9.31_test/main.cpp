#include <iostream>
#include <list>
#include <forward_list>
using namespace std;

int main()
{
    // list
    list<int> ilst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto curr = ilst.begin(); // 首节点

    while (curr != ilst.end())
    {
        if (*curr & 1)                       // 位与判断奇偶
        {                                    // 奇数
            curr = ilst.insert(curr, *curr); // 插入到当前元素之前
            ++curr;
            ++curr; // 移动到原容器下一元素
        }
        else
        {                            // 偶数
            curr = ilst.erase(curr); // 删除，指向下一元素
        }
    }

    for (curr = ilst.begin(); curr != ilst.end(); ++curr)
        cout << *curr << " ";
    cout << endl;

    // forward_list
    forward_list<int> flst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto beg = flst.begin(); // 首节点
    auto prev = flst.before_begin();
    while (beg != flst.end())
    {
        if (*beg & 1)                            // 位与判断奇偶
        {                                        // 奇数
            beg = flst.insert_after(prev, *beg); // 插入到当前元素之前
            ++beg;
            prev = beg; // 更新前驱节点
            ++beg;      // 移动到原容器下一元素
        }
        else
        {                                 // 偶数
            beg = flst.erase_after(prev); // 删除，指向下一元素
        }
    }

    for (beg = flst.begin(); beg != flst.end(); ++beg)
        cout << *beg << " ";
    cout << endl;

    return 0;
}