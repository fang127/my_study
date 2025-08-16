#include <iostream>
#include "Sales_data.h"

int main()
{
    Sales_data total;
    std::cout << "Enter sales data (ISBN, units sold, revenue):\n";
    if (read(std::cin, total))
    {
        Sales_data trans;
        while (read(std::cin, trans))
        {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else
            {
                print(std::cout, total) << "\n";
                total = trans;
            }
        }
        print(std::cout, total) << "\n";
    }
    else
    {
        std::cerr << "No data?!" << std::endl;
    }
    return 0;
}