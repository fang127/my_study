#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::cout << "Enter some numbers (end with 0): ";
    int number = 0;
    std::vector<int> vec;
    while (std::cin >> number)
        vec.push_back(number);
    std::cin.clear(); // Clear the input stream to avoid infinite loop
    std::cout << "Please enter a number to count its occurrences: ";
    int count_number = 0;
    std::cin >> count_number;
    int num = count(vec.cbegin(), vec.cend(), count_number);
    std::cout << "The number " << count_number << " occurs " << num << " times." << std::endl;
    return 0;
}