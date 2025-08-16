#include <iostream>
#include <ctime>
#include "Array.h"

int main()
{
    Array<int> arr;

    srand((unsigned)time(nullptr));
    for (int i = 0; i < 10; ++i)
    {
        arr.push_back(rand() % 100);
    }
    arr.show();

    arr.insert(0, 100);
    arr.show();

    std::cout << "Element 100 found at index: " << arr.find(100) << std::endl;

    std::cout << "Size: " << arr.size() << std::endl;
    std::cout << "Capacity: " << arr.capacity() << std::endl;

    arr.erase(100);
    arr.show();

    arr.pop_back();
    arr.show();

    std::cout << "Element at index 2: " << arr[2] << std::endl;

    return 0;
}