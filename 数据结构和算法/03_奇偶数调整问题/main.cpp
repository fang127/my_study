#include <iostream>
#include <ctime>
#include <algorithm>

/*
    奇数放到右边，偶数放在左边，利用双指针解决,复杂夫o(n)；
*/
void adjustArr(int arr[], std::size_t size)
{
    int *p = arr, *q = arr + size - 1;
    while (p < q)
    {
        while (p < q)
        {
            if ((*p & 0x1) == 1) // 位与判断，比求模判断快
            {
                break;
            }
            ++p;
        }

        while (p < q)
        {
            if ((*q & 0x1) == 0)
            {
                break;
            }
            --q;
        }

        if (p < q)
        {
            auto temp = *p;
            *p = *q;
            *q = temp;
            ++p;
            --q;
        }
    }
}

int main()
{
    int arr[10];
    srand((unsigned)time(nullptr));
    for (int i = 0; i != 10; ++i)
    {
        arr[i] = rand() % 100;
    }

    std::for_each(std::begin(arr), std::end(arr), [](const int &i)
                  { std::cout << i << " "; });
    std::cout << "\n";

    adjustArr(arr, sizeof(arr) / sizeof(arr[0]));

    std::for_each(std::begin(arr), std::end(arr), [](const int &i)
                  { std::cout << i << " "; });
    std::cout << "\n";

    return 0;
}