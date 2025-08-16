#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> flst;
    int num = 0;
    std::cout << "Enter numbers (0 to stop): ";
    while (std::cin >> num)
        flst.push_front(num);

    std::cout << "You entered: ";
    for (const auto &elem : flst)
    {
        std::cout << elem << ' ';
    }
    std::cout << std::endl;

    auto prev = flst.before_begin();
    auto it = flst.begin();
    while (it != flst.end())
    {
        if (*it % 2 == 0)
        {
            prev = it;
            ++it;
        }
        else
        {
            it = flst.erase_after(prev);
        }
    }
    std::cout << "After removing odd numbers: ";
    for (const auto &elem : flst)
    {
        std::cout << elem << ' ';
    }
    std::cout << std::endl;

    return 0;
}