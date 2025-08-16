#include <iostream>
#include <fstream>
#include "StrBlob.h"
#include "StrBlobPtr.h"
#include "ConstStrBlobPtr.h"

int main()
{
    std::ifstream in;
    std::string file_name;
    std::cout << "请输入文件名：" << std::endl;
    std::cin >> file_name;
    in.open(file_name, std::ios_base::in);
    if (!in.is_open())
        throw std::runtime_error("Dont open " + file_name);

    StrBlob str;
    std::string line;
    while (std::getline(in, line))
        str.push_back(line);

    for (auto beg(str.begin()), end(str.end()); beg != end; beg.incr())
    {
        std::cout << beg.deref() << std::endl;
    }
    in.close();

    std::cout << "ConstStrBlobPtr test:" << std::endl;
    const StrBlob str02(str);
    for (auto beg(str02.begin()), end(str02.end()); beg != end; beg.incr())
    {
        std::cout << beg.deref() << std::endl;
    }

    return 0;
}