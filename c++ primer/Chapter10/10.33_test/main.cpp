#include <iostream>
#include <iterator>
#include <algorithm>
#include <fstream>
#include <stdexcept>

int main(int argc, char *argv[])
{
    if (argc < 4)
        throw std::runtime_error("Usage: " + std::string(argv[0]) + " <filename>");

    std::ifstream inputfile(argv[1]);
    std::ofstream outputfile01(argv[2]);
    std::ofstream outputfile02(argv[3]);

    std::istream_iterator<int> begin(inputfile), end;
    std::ostream_iterator<int> output01(outputfile01, " "), output02(outputfile02, " ");

    while (begin != end)
    {
        if (*begin % 2 == 0)
        {
            *output01++ = *begin++;
        }
        else
        {
            *output02++ = *begin++;
        }
    }

    return 0;
}