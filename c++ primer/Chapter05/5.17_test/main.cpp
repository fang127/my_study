#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v01{0, 1, 1, 2}, v02{0, 1, 1, 2, 3, 5, 8};
    decltype(v01.size()) begin = 0, end;
    if (v01.size() <= v02.size())
    {
        end = v01.size();
    }
    else
    {
        end = v02.size();
    }
    for (; begin != end; ++begin)
    {
        if (v01[begin] == v02[begin])
        {
        }
        else
        {
            std::cout << "v01和v02不是头缀包含的关系" << std::endl;
            return 0;
        }
    }
    std::cout << "v01和v02是头缀包含的关系" << std::endl;
    return 0;
}