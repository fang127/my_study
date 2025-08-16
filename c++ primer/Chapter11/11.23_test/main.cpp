#include <iostream>
#include <map>
#include <vector>
#include <string>

int main()
{
    std::multimap<std::string, std::vector<std::string>> family;
    std::string last_name, name;
    std::cout << "Please enter last name:" << std::endl;
    while (std::cin >> last_name)
    {
        if (!last_name.empty())
        {
            std::cout << "Please enter name:" << std::endl;
            while (std::cin >> name)
            {
                if (!name.empty())
                    family.insert({last_name, {name}});
            }
            std::cin.clear();
            std::cout << "Please enter last name:" << std::endl;
        }
        else
            std::cerr << "No data!?";
    }

    for (auto i : family)
    {
        std::cout << "last name : " << i.first << " name : ";
        for (auto j : i.second)
            std::cout << j << " ";
        std::cout << std::endl;
    }

    return 0;
}