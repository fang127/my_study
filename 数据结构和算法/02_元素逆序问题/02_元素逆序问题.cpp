#include <iostream>
#include <cstring>

void Reverse(char arr[], int size)
{
    char *p = arr, *q = arr + size - 1;
    while (p < q)
    {
        auto temp = *q;
        *q = *p;
        *p = temp;
        --q;
        ++p;
    }
}

int main()
{
    char arr[] = "hello world!";
    Reverse(arr, strlen(arr));

    std::cout << arr << std::endl;

    return 0;
}