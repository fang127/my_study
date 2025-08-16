#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <iterator>
#include <vector>

class check
{
public:
    // check(size_t count = 0) : count(count) {}
    //  bool operator()(const std::string &str) const
    //  {
    //      return str.size() == count;
    //  }

    check(size_t min = 1, size_t max = 10) : min(min), max(max) {}

    bool operator()(const std::string &str) const
    {
        return str.length() < max && str.length() >= min;
    }

private:
    // size_t count = 0;
    size_t min = 1;
    size_t max = 10;
};

int main()
{
    std::string filename;
    std::cout << "Enter the filename: ";
    std::cin >> filename;
    std::ifstream file(filename, std::ios_base::in);
    if (!file)
    {
        std::cerr << "Error opening file: " << filename << std::endl;
        return 1;
    }

    // 先将所有单词读入vector
    std::istream_iterator<std::string> start(file), end;
    std::vector<std::string> words(start, end);

    // size_t arr[10] = {};
    // for (size_t i = 1; i < 11; ++i)
    // {
    //     auto count = std::count_if(words.begin(), words.end(), check(i));
    //     arr[i - 1] = count;
    // }

    // // 修正输出逻辑
    // for (size_t i = 0; i < 10; ++i)
    // {
    //     std::cout << "length:" << (i + 1) << " words has: " << arr[i] << std::endl;
    // }

    auto count = std::count_if(words.begin(), words.end(), check(1, 10));
    std::cout << "Words with length between 1 and 10: " << count << std::endl;

        return 0;
}