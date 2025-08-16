#include <iostream>
#include <map>

int main()
{
    std::map<const int, int> my_map;
    my_map[32] = 222;
    std::map<const int, int>::iterator iter = my_map.begin();
    iter->second = 0;
    std::cout << iter->first << std::endl;
    std::cout << iter->second;
    return 0;
}