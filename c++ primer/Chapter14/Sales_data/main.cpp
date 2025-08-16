#include "Sales_data.h"
#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    Sales_data book01("978-3-16-148410-0", 10, 29.99);
    Sales_data book02("978-1-60309-452-8", 5, 19.99);
    Sales_data book03("978-0-306-40615-7", 3, 15.99);
    Sales_data book04("978-0-201-53082-7", 8, 25.00);
    std::vector<Sales_data> books{book01, book02, book03, book04};
    std::sort(books.begin(), books.end(),
              [](const Sales_data &a, const Sales_data &b)
              {
                  return a.isbn() < b.isbn();
              });
    std::cout << "Books sorted by ISBN:\n";
    for (const auto &book : books)
    {
        std::cout << book << std::endl;
    }

    return 0;
}