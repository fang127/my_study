#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <stdexcept>
#include <cstring> // for memcpy

template <typename T>
class Array
{
    typedef std::size_t size_type;
    typedef T value_type;

public:
    Array(size_type size = 10) : cap(size), value_size(0)
    {
        myArr = new T[size];
    }

    ~Array()
    {
        delete[] myArr;
        myArr = nullptr;
    }

    void push_back(const T &ele) // 尾插
    {
        if (this->size() < this->capacity())
        {
            this->myArr[value_size] = ele;
            ++value_size;
        }
        else
        {
            this->expand(2 * cap);
            this->myArr[value_size] = ele;
            ++value_size;
        }
    }

    void pop_back() // 尾删
    {
        if (this->size() == 0)
        {
            return;
        }
        --value_size;
    }

    size_type size() const
    {
        return this->value_size;
    }

    size_type capacity() const
    {
        return this->cap;
    }

    void insert(size_type pos, const T &ele) // 插入元素
    {
        if (pos > this->size())
        {
            throw std::runtime_error("invalid pos");
        }

        if (this->capacity() == this->size())
        {
            this->expand(2 * this->capacity());
        }

        for (size_type i = this->size(); i != pos; --i)
        {
            this->myArr[i] = this->myArr[i - 1];
        }

        this->myArr[pos] = ele;
        ++this->value_size;
    }

    void erase(size_type pos) // 按位置删除
    {
        if (pos >= this->size())
        {
            throw std::runtime_error("invalid pos");
        }

        for (size_type i = pos; i != this->size() - 1; ++i)
        {
            this->myArr[i] = this->myArr[i + 1];
        }
        --this->value_size; // 减少元素个数
    }

    void erase(const T &ele) // 按第一个对应元素删除
    {
        size_type pos = this->find(ele);
        if (pos == size_type(-1))
        {
            throw std::runtime_error("element not found");
        }
        this->erase(pos);
    }

    size_type find(const T &ele) const // 查找元素
    {
        for (size_type i = 0; i < this->size(); ++i)
        {
            if (this->myArr[i] == ele)
            {
                return i; // 返回第一个匹配元素的位置
            }
        }

        return size_type(-1); // 如果未找到，返回-1
    }

    T &operator[](size_type pos) // 下标访问运算符
    {
        if (pos >= this->size())
        {
            throw std::runtime_error("invalid pos");
        }
        return this->myArr[pos];
    }

    const T &operator[](size_type pos) const
    {
        if (pos >= this->size())
        {
            throw std::runtime_error("invalid pos");
        }
        return this->myArr[pos];
    }

    void show() const // 显示数组内容
    {
        for (size_type i = 0; i < this->size(); ++i)
        {
            std::cout << this->myArr[i] << " ";
        }
        std::cout << std::endl;
    }

private:
    void expand(size_type size); // 扩容

    T *myArr;             // 数组指针
    size_type cap;        // 数组容量
    size_type value_size; // 元素个数
};

/*
    private
*/
template <typename T>
void Array<T>::expand(size_type size)
{
    T *p = new T[size];
    memcpy(p, myArr, sizeof(T) * value_size);
    delete[] myArr;
    this->myArr = p;
    this->cap = size;
}

/*
    public
*/

#endif // ARRAY_H