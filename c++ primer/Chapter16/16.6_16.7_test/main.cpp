#include <iostream>

template <class _Ty, size_t _Size>
constexpr _Ty *begin(_Ty (&_Array)[_Size]) noexcept
{
    return _Array;
}

template <class _Ty, size_t _Size>
constexpr _Ty *end(_Ty (&_Array)[_Size]) noexcept
{
    return _Array + _Size;
}

template <typename T, size_t N>
size_t arr_size(const T (&arr)[N])
{
    return N;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    for (auto it = begin(arr); it != end(arr); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    std::cout << "Size of arr: " << arr_size(arr) << std::endl;

    return 0;
}