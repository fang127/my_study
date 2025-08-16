#include <iostream>
#include <vector>
#include <numeric>

int main()
{
    std::vector<int> vec;
    std::cout << "Enter numbers: ";
    int num = 0;
    while (std::cin >> num)
    {
        vec.push_back(num);
    }

    int sum = std::accumulate(vec.cbegin(), vec.cend(), 0);
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Average: " << static_cast<double>(sum) / vec.size();
    return 0;
}