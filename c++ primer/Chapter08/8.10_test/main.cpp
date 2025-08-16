#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>

void read_file(const std::string &word, std::vector<std::string> &v)
{
    std::ifstream file(word);
    std::string temp;
    while (std::getline(file, temp))
        v.push_back(temp);
    file.close();
}

int main()
{
    std::cout << "请输入要读取的文件全名。" << "\n";
    std::string word;
    std::cin >> word;
    std::vector<std::string> v;
    read_file(word, v);

    std::cout << "现在vector中的内容为：" << "\n";
    for (auto i : v)
        std::cout << i << "\n";
    std::cout << "**************************" << "\n";

    std::istringstream record;
    for (auto &i : v)
    {

        record.str(i);
        std::string str;
        while (record >> str)
            std::cout << str << " ";
        std::cout << "\n";
        record.clear();
        /*
        因为 std::istringstream 的 str() 方法会设置流的内容，但流的状态（如是否到达文件末尾）不会自动重置。如果你不加第38行：
        那么在第一次 while (record >> str) 循环后，record 的状态已经是“读取结束”（即 eof），
        后续再用 record.str(i) 设置新内容时，流的状态仍然是“结束”，导致无法再读取内容，只会输出换行。
        加上 record.clear();
        后，会重置流的状态，使其可以继续读取下一个字符串内容。
        所以，必须加上 record.clear();
        ，否则只能正确处理第一个元素，后面的都无法读取内容。
        还可以将29行创建istringstream流的内容放在for作用域内，这样每次for都会新创建一个流。
        */
    }

    system("pause");

    return 0;
}