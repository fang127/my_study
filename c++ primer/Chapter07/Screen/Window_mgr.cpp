#include "Window_mgr.h"
#include "Screen.h"
void Window_mgr::clear(std::vector<Screen>::size_type index)
{
    Screen &screen = screens[index];
    screen.display(std::cout);
    std::cout << "\n";
    screen.contents = std::string(screen.height * screen.width, 'X');
    screen.display(std::cout);
    std::cout << "\n";
}