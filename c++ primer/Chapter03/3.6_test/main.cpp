#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "please input one string:" << endl;
    getline(cin, str);
    for (auto &i : str)
        i = 'X';
    cout << str << endl;

    return 0;
}