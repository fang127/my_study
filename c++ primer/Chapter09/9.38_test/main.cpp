#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec;
    vec.reserve(10);
    for (int i = 0; i < 100; ++i)
    {
        vec.push_back(i);
        std::cout << "Size: " << vec.size() << ", Capacity: " << vec.capacity() << std::endl;
    }

    return 0;
}