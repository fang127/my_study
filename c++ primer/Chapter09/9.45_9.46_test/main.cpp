#include <iostream>
#include <string>

std::string &format_name(std::string &name, const std::string &first, const std::string &end)
{
    // name.insert(name.begin(), first.begin(), first.end());
    // name.append(end.begin(), end.end());
    name.insert(0, first);
    name.insert(name.size(), end);
    return name;
}

int main()
{
    std::string name = "Smith";
    format_name(name, "Mr.", " Jr.");
    std::cout << name << std::endl;
    return 0;
}