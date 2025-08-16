#include <iostream>
#include "Sales_data.h"

int main()
{
    Sales_data total01;
    print(std::cout, total01);
    std::cout << "\n";
    Sales_data total02("978-3-16-148410-0", 10, 29.99);
    print(std::cout, total02);
    std::cout << "\n";
    Sales_data total03("978-0-306-40615-7");
    print(std::cout, total03);
    std::cout << "\n";
    Sales_data total04(std::cin);
    print(std::cout, total04);
    std::cout << "\n";

    std::cout << "*******************" << std::endl;
    std::cout << "Enter sales data (ISBN, units sold, revenue):y or n\n";
    std::string status;
    std::cin >> status;
    if (status == "y" || status == "Y")
    {
        std::cout << "Enter sales data (ISBN, units sold, price):\n";
        Sales_data total(std::cin);
        while (1)
        {
            std::cout << "Enter next sales data (ISBN, units sold, revenue):y or n\n";
            std::cin >> status;
            if (status == "y" || status == "Y")
            {
                Sales_data trans(std::cin);
                if (total.isbn() == trans.isbn())
                    total.combine(trans);
                else
                {
                    print(std::cout, total) << "\n";
                    total = trans;
                }
            }
            else
            {
                break;
            }
        }
        print(std::cout, total);
    }
    else
    {
        std::cerr << "No data?!";
    }

    return 0;
}