#ifndef WINDOW_MGR_H
#define WINDOW_MGR_H

#include <vector>
#include "Screen.h"

class Window_mgr
{
public:
    void clear(std::vector<Screen>::size_type index);

private:
    std::vector<Screen> screens{Screen(24, 80, 'Y')};
};

#endif