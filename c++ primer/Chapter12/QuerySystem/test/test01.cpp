#include <iostream>
#include <fstream>
#include "TextQuery.h"
#include "QueryResult.h"

void runQueries(std::ifstream &input_file)
{
    TextQuery tq(input_file);
    std::string word;
    while (true)
    {
        std::cout << "Enter word to look for, or q to quit: ";
        if (!(std::cin >> word) || word == "q")
            break;
        QueryResult result = tq.query(word);
        result.print(std::cout);
    }
}

int main()
{
    std::ifstream input_file;
    std::string filename;
    std::cout << "Enter the filename to open: ";
    std::cin >> filename;
    input_file.open(filename);
    if (!input_file)
    {
        std::cerr << "Could not open file." << std::endl;
        return 1;
    }

    runQueries(input_file);

    input_file.close();
    return 0;
}