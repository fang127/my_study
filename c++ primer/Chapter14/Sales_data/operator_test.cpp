#include <iostream>
#include "Sales_data.h"

int main()
{
    Sales_data book01("978-3-16-148410-0", 10, 29.99);
    Sales_data book02("978-1-60309-452-8", 5, 19.99);

    std::cout << "Test Sales_data operators:\n";
    std::cout << "Book 01: " << book01 << std::endl;
    std::cout << "Book 02: " << book02 << std::endl;
    std::cout << "Are books equal? " << (book01 == book02 ? "Yes" : "No") << std::endl;
    std::cout << "Are books equal? " << (book01 != book02 ? "Yes" : "No") << std::endl;

    std::cout << "Input book data (ISBN, units sold, price): ";
    Sales_data bookInput;
    std::cin >> bookInput;
    std::cout << "Input book: " << bookInput << std::endl;

    Sales_data book03(book02);
    book03 += book02;
    std::cout << "Book 03 after += operation: " << book03 << std::endl;
    std::cout << "Adding books: " << (book03 + book03) << std::endl;

    book03 = "978-0-306-40615-7";
    std::cout << "Book 03 after assignment: " << book03 << std::endl;

    return 0;
}