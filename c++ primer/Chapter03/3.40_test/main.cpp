#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char ch1[] = "hello", ch2[] = " world!!!";
    char ch3[strlen(ch1) + strlen(ch2)];
    strcpy(ch3, ch1);
    strcat(ch3, ch2);
    cout << ch1 << endl;
    cout << ch2 << endl;
    cout << ch3 << endl;
    return 0;
}