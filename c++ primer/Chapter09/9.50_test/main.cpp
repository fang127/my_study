#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> vec{"1.1", "2", "3", "4"};
    double sum = 0;
    for (auto word : vec)
        sum += std::stod(word); // 将字符串转换为整数并累加
    std::cout << "Sum of numbers in vector: " << sum << std::endl;
    return 0;
}