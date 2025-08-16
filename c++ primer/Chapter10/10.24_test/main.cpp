#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <functional>

#include <iostream>
#include <vector>
#include <string>
#include <functional>
#include <algorithm>

using namespace std;
using std::placeholders::_1;

bool check_size(const string &s, int sz)
{
    return s.size() < sz;
}

void biggies(vector<int> &ivec, const string &s)
{
    // 查找第一个大于等于 s 长度的数值
    auto p = find_if(ivec.begin(), ivec.end(),
                     bind(check_size, s, _1));

    // 打印结果
    cout << "第" << p - ivec.begin() + 1 << "个数" << *p
         << "大于" << s << "的长度" << endl;
}

int main()
{
    vector<int> iv = {3, 2, 4, 5, 7};

    biggies(iv, "C++");
    biggies(iv, "Primer");

    return 0;
}
