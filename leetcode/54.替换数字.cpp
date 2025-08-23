#include <iostream>
#include <string>
#include <cctype>

int main()
{
    std::string str;
    while (std::cin >> str)
    {

        int count = 0;
        for (auto &i : str)
        {
            if (isdigit(i))
            {
                ++count;
            }
        }

        std::string::size_type size = count * 6 + str.size() - count;
        str.resize(size);

        for (int i = str.size() - 5 * count - 1, j = str.size() - 1; i >= 0; --i)
        {
            if (isdigit(str[i]))
            {
                str[j--] = 'r';
                str[j--] = 'e';
                str[j--] = 'b';
                str[j--] = 'm';
                str[j--] = 'u';
                str[j--] = 'n';
            }
            else
            {
                str[j--] = str[i];
            }
        }
        std::cout << str << std::endl;
    }

    return 0;
}