#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec;
    auto it = vec.begin();
    int num = 0;
    while (std::cin >> num)
    {
        it = vec.insert(it, num);
    }

    for (auto i : vec)
    {
        std::cout << i << " ";
    }
    std::cout << "\n";

    return 0;
}