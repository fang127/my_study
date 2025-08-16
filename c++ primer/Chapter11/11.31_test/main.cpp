#include <iostream>
#include <map>
#include <string>

int main()
{
    std::multimap<std::string, std::string> books;
    books.insert({"Barth,John", "Sot-Weed Factor"});
    books.insert({"Barth,John", "Lost in the Funhouse"});
    books.insert({"Li", "today"});
    books.insert({"Li", "tuesday"});
    books.insert({"Li", "monday"});

    std::cout << "Enter one auther to delete his book:" << std::endl;
    std::string word;
    if (std::cin >> word)
    {
        if (books.find(word) != books.end())
        {
            books.erase(word);
        }
    }

    for (auto i : books)
    {
        std::cout << i.first << "\t" << i.second << std::endl;
    }

    return 0;
}
