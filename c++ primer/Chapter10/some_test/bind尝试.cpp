#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std::placeholders;

int main()
{
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Using std::bind to create a function that adds a fixed value
    auto add = std::bind(std::plus<int>(), _1, 10);

    // Applying the bound function to each element in the vector
    std::transform(numbers.begin(), numbers.end(), numbers.begin(), add);

    // Output the modified vector
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}