#include <iostream>

// 流的状态四种，good为0，bad为1，eof为2，fail为4；
std::istream &func(std::istream &is)
{
    std::string buf;
    while (is >> buf)
        std::cout << buf << "\n";
    std::cout << is.rdstate() << "\n"; // 读取到eof，failbit和eofbit同时置位，failbit为4，即0100，eofbit为2，即为0010，和为0110，即为6；
    is.clear();
    std::cout << is.rdstate() << "\n"; // 清楚之后，恢复了状态，即为0；
    return is;
}

int main()
{
    std::cout << "请输入一些整数，按 Ctrl+Z 结束" << "\n";
    func(std::cin);

    return 0;
}