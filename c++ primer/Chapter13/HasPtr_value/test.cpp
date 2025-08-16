#include <algorithm>
#include <vector>
#include "HasPtr.h"

int main()
{
    HasPtr h("hi mom!");
    HasPtr h2(h);
    HasPtr h3 = h;
    h2 = h3;
    h2 = std::move(h3);

    return 0;
}