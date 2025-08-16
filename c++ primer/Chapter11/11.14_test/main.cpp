#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <utility>

int main()
{
    std::map<std::string, std::vector<std::string>> family;
    std::vector<std::pair<std::string, std::string>> vec;
    std::string last_name, name, birthday;
    std::cout << "Please enter last name:" << std::endl;
    while (std::cin >> last_name)
    {
        if (!last_name.empty())
        {
            std::cout << "Please enter name and birthday:" << std::endl;
            while (std::cin >> name >> birthday)
            {
                if (!name.empty())
                {
                    family[last_name].push_back(name);
                    vec.push_back({name, birthday});
                }
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

    for (auto i : vec)
    {
        std::cout << i.first << "\tbirthday: " << i.second << "\n";
    }
    std::cout << std::endl;

    return 0;
}