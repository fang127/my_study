#include <map>
#include <set>
#include <string>
#include <iostream>

using std::string;

int main()
{
    std::multimap<string, string> authors{
        {"alan", "DMA"}, {"pezy", "LeetCode"}, {"alan", "CLRS"}, {"wang", "FTP"}, {"pezy", "CP5"}, {"wang", "CPP-Concurrency"}};

    /*
     * multimap 默认是按关键字字典序访问元素，所以输出
     * 也是关键字字典序；关键字关联的值无法保证有序
     */
    for (const auto &author : authors)
        std::cout << author.first << ": " << author.second << std::endl;
    std::cout << std::endl;
    /*
     * 创建 map，实现作者和作品的映射
     * key_type 类型为 string
     * mapped_type 类型为 multiset<string>
     * map 和 multiset 的关键字是有序的
     * 这样就可以实现作者和著作都有序输出了
     */
    std::map<string, std::multiset<string>> m;
    // 将 authors 中的作者及其著作都插入到 m 中
    for (const auto &author : authors)
        m[author.first].insert(author.second);
    // 遍历 m，实现作者有序，作者著作也有序
    // 当然这里的有序指的是字典序
    for (const auto &s : m)
    {
        std::cout << s.first << ": ";
        for (const auto &b : s.second)
            std::cout << b << " ";
        std::cout << std::endl;
    }

    return 0;
}
