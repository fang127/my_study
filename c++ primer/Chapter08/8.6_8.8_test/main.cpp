#include <iostream>
#include <fstream>
#include <string>
#include "Sales_data.h"

int main(int argc, char *argv[])
{
    std::ifstream file_read(argv[1]);
    std::ofstream file_write(argv[2], std::ios_base::app);
    Sales_data book01;
    if (read(file_read, book01))
    {
        Sales_data book02;
        while (read(file_read, book02))
        {
            if (book01.isbn() == book02.isbn())
                book01.combine(book02);
            else
            {
                print(file_write, book01) << "\n";
                book01 = book02;
            }
        }
        print(file_write, book01) << "\n";
    }
    else
    {
        std::cout << "No data!!!" << std::endl;
    }
    file_read.close();
    file_write.close();

    return 0;
}