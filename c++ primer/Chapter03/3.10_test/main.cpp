#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "please input one string:" << endl;
    cin >> str;
    for (auto i : str)
        if (!ispunct(i))
            cout << i;
    cout << endl;

    return 0;
}