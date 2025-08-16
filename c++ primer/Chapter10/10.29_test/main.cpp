#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <stdexcept>
#include <iterator>
#include <algorithm>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        throw std::runtime_error("Usage: " + std::string(argv[0]) + " <filename>");
    }

    std::ifstream file(argv[1]);
    if (!file.is_open())
    {
        throw std::runtime_error("Could not open file: " + std::string(argv[1]));
    }

    std::vector<std::string> vec;
    std::istream_iterator<std::string> begin(file), end;
    std::copy(begin, end, std::back_inserter(vec));

    std::cout << "Contents of the file:\n";
    std::ostream_iterator<std::string> out_it(std::cout, " ");
    std::copy(vec.begin(), vec.end(), out_it);

    file.close();

    return 0;
}