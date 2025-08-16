#include <iostream>
#include <string>
#include <unordered_set>
#include "Sales_data.h"

int main()
{
    std::unordered_multiset<Sales_data> SDset;
    Sales_data item;
    while (std::cin >> item)
        SDset.insert(item);
    std::cout << SDset.size() << std::endl;
    for (auto sd : SDset)
        std::cout << sd << std::endl;

    return 0;
}