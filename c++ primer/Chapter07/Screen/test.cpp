#include <iostream>
#include "Window_mgr.h"
#include "Screen.h"

int main()
{
    Screen my_Screen(5, 5, 'X');
    my_Screen.move(4, 0).set('#').display(std::cout);
    std::cout << "\n";
    my_Screen.display(std::cout);
    std::cout << "\n";
    Window_mgr mgr;
    mgr.clear(0);

    system("pause");
    return 0;
}