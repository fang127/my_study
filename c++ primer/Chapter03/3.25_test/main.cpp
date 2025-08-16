#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<unsigned> scores(11, 0);
    unsigned grade;
    while (cin >> grade)
    {
        if (grade <= 100)
        {
            vector<unsigned>::iterator ben = scores.begin();
            vector<unsigned>::iterator end = scores.end();
            ++*(ben + grade / 10);
        }
    }

    for (auto it = scores.cbegin(); it != scores.cend(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}