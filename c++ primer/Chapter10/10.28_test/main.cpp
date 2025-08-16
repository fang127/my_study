#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <deque>
#include <forward_list>

void print(int n)
{
    std::cout << n << " ";
}

int main()
{
    std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::list<int> lst;
    std::deque<int> deq;
    std::forward_list<int> flst;

    // lst
    std::copy(vec.begin(), vec.end(), std::back_inserter(lst));
    std::for_each(lst.begin(), lst.end(), print);
    std::cout << "\n";
    // deq
    std::copy(vec.begin(), vec.end(), std::inserter(deq, deq.begin()));
    std::for_each(deq.begin(), deq.end(), print);
    std::cout << "\n";

    // flst
    std::copy(vec.begin(), vec.end(), std::front_inserter(flst));
    std::for_each(flst.begin(), flst.end(), print);
    std::cout << "\n";

    return 0;
}