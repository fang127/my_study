#include <iostream>
#include <string>
#include <algorithm>
#include "Vec.h"

int main()
{
    Vec<int> v;
    Vec<std::string> v2;
    for (int i = 0; i != 5; ++i)
    {
        v.push_back(i);
        v2.push_back("hello");
        std::cout << "capacity: " << v.capacity() << "\tsize: " << v.size() << std::endl;
    }

    for (auto beg = v.begin(); beg != v.end(); ++beg)
    {
        std::cout << *beg << " ";
    }

    std::for_each(v2.begin(), v2.end(),
                  [](const std::string &s)
                  {
                      std::cout << s << " ";
                  });

    return 0;
}