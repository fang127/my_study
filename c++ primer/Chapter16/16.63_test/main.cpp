#include <iostream>
using std::cout;
using std::endl;
#include <vector>
using std::vector;
#include <string>
using std::string;
#include <cstring>

template <typename T>
std::size_t count(std::vector<T> &v, const T &ths)
{
    std::size_t cnt = 0;
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (*it == ths)
        {
            ++cnt;
        }
    }
    return cnt;
}

template <>
std::size_t count(std::vector<char *> &v, char *const &ths)
{
    std::size_t cnt = 0;
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (std::strcmp(*it, ths) == 0)
        {
            ++cnt;
        }
    }
    return cnt;
}

int main()
{
    vector<double> dvec = {1.1, 3.14, 2.2, 3.14, 3.3, 4.4};
    cout << count(dvec, 3.14) << endl;

    vector<int> ivec = {0, 1, 2, 3, 4, 5};
    cout << count(ivec, 0) << endl;

    vector<string> svec = {"Hello", "World", "!"};
    cout << count(svec, string("end")) << endl;

    // 练习 16.64
    vector<char *> pvec;
    pvec.push_back(new char[6]);
    pvec.push_back(new char[6]);
    pvec.push_back(new char[2]);
    strcpy(pvec[0], "Hello");
    strcpy(pvec[1], "World");
    strcpy(pvec[2], "!");
    char *w = new char[6];
    strcpy(w, "World");
    cout << count(pvec, w) << endl;
    delete[] w;
    delete pvec[2];
    delete pvec[1];
    delete pvec[0];

    return 0;

    return 0;
}