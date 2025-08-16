#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 88, 99};
    size_t sz = v.size();
    int arr[sz];
    for (int i = 0; i != sz; ++i)
        arr[i] = v[i];

    for (auto i : arr)
        cout << i << " ";
    cout << endl;
    return 0;
}