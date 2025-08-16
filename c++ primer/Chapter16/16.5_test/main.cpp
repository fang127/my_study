#include <iostream>

template <typename T, size_t N>
void print(const T (&arr)[N])
{
    for (const auto &elem : arr)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    print(arr);
    double arr2[3] = {1.1, 2.2, 3.3};
    print(arr2);
    char arr3[4] = {'a', 'b', 'c', 'd'};
    print(arr3);

    return 0;
}