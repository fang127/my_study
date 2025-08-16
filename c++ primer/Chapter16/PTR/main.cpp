#include <string>
using std::string;

#include <iostream>
using std::cout;
using std::endl;

#include "Blob.h"

int main()
{
    string temp[] = {"a", "an", "the"};
    Blob<string> b1(temp, temp + sizeof(temp) / sizeof(*temp));
    b1.push_back("about");
    cout << b1.size() << endl;
    for (int i = 0; i < b1.size(); ++i)
        cout << b1.at(i) << endl;

    UniquePtr<int> u1(new int(42));
    cout << *u1 << endl;

    return 0;
}
