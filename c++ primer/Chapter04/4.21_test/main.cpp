#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    srand((unsigned)time(NULL));

    for (int i = 0; i < 10; ++i)
    {
        v.push_back(rand() % 100);
    }
    for (auto &i : v)
    {
        i = (i % 2 == 0 ? i : 2 * i);
        cout << i << endl;
    }
    return 0;
}