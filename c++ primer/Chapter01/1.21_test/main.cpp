#include <iostream>
#include "Sales_item.hpp"
using namespace std;

int main()
{
    Sales_item book01, book02;
    cout << "please input two book's info:" << endl;
    cin >> book01 >> book02;
    cout << "these books's sum is: " << book01 + book02 << endl;

    system("pause");

    return 0;
}