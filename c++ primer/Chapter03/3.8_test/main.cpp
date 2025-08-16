#include <iostream>
using namespace std;
#include <string>

int main()
{
    string str;
    cout << "please input one string:" << endl;
    getline(cin, str);

    // while
    decltype(str.size()) i = 0;
    while (i != str.size())
    {
        cout << str[i];
        ++i;
    }
    cout << endl;
    cout << "***********************" << endl;
    // for
    for (decltype(str.size()) j = 0; j != str.size(); ++j)
        cout << str[j];
    cout << endl;
    return 0;
}