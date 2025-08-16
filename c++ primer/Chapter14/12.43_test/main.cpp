#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using std::placeholders::_1;

#include <functional>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;
    std::modulus<int> mod;
    std::vector<int> ivec{1, 2, 4, 5, 10};
    auto predicator = [&](int i)
    { return 0 == mod(n, i); };
    auto is_divisible = std::all_of(ivec.begin(), ivec.end(), predicator);
    std::cout << (is_divisible ? "Yes" : "No");
    std::cout << std::endl;

    return 0;
}
