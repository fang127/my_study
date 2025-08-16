#include <iostream>
#include <fstream>
#include "Query.h"
#include "Query_base.h"
#include "TextQuery.h"
#include "QueryResult.h"

int main()
{
    std::ifstream file;
    std::string filename;
    std::cin >> filename;
    file.open(filename);
    if (!file)
    {
        std::cerr << "Could not open file: " << filename << std::endl;
        return 1;
    }
    TextQuery textQuery(file);
    Query q = Query("her") & Query("it") | Query("hair");
    std::cout << q << std::endl;
    QueryResult result = q.eval(textQuery);
    result.print(std::cout);

    return 0;
}