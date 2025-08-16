#ifndef VEC_H
#define VEC_H

#include <memory>
#include <initializer_list>

template <typename T>
class Vec
{
public:
    // 拷贝控制成员
    Vec() : element(nullptr), first_free(nullptr), cap(nullptr) {}

    Vec &operator=(const Vec &);

    Vec(const Vec &);

    ~Vec();

    // 成员函数接口
    std::size_t capacity() const
    {
        return this->cap - this->element;
    }

    std::size_t size() const
    {
        return this->first_free - this->element;
    }

    T *begin() const
    {
        return this->element;
    }

    T *end() const
    {
        return this->first_free;
    }

    void push_back(const T &);

    template <typename... Args>
    void emplace_back(Args &&...ele);

    // 重载运算符

private:
    static std::allocator<T> allo;

    // 成员函数
    std::pair<T *, T *> allo_n_copy(const T *, const T *);

    void check_n_allo();

    void reallocate();

    void free();

    // 元素指针
    T *element;    // 首元素
    T *first_free; // 最后一个元素下一位置
    T *cap;        // 尾后位置
};

// 静态成员
template <typename T>
std::allocator<T> Vec<T>::allo;

// 构造函数
template <typename T>
Vec<T>::Vec(const Vec &vec)
{
    auto new_data = this->allo_n_copy(vec.begin(), vec.end());
    this->element = new_data.first;
    this->first_free = this->cap = new_data.second;
}

template <typename T>
Vec<T> &Vec<T>::operator=(const Vec &ths)
{
    auto data = allo_n_copy(ths.begin(), ths.end());
    this->element = data.first;
    this->first_free = this->cap = data.second;
    return *this;
}

template <typename T>
Vec<T>::~Vec()
{
    this->free();
}

// 重载运算符

// 成员函数
/*







    public





*/
template <typename T>
inline void Vec<T>::push_back(const T &ele)
{
    this->check_n_allo();
    allo.construct(this->first_free++, ele);
}

template <typename T>
template <typename... Args>
inline void Vec<T>::emplace_back(Args &&...ele)
{
    this->check_n_allo();
    allo.construct(this->first_free++, std::forward<Args>(ele)...);
}

/*






    private






*/

/*
    拷贝beg和end迭代器内的所有元素
*/
template <typename T>
std::pair<T *, T *> Vec<T>::allo_n_copy(const T *beg, const T *end)
{
    auto data = allo.allocate(end - beg);
    return {data, std::uninitialized_copy(beg, end, data)};
}

template <typename T>
void Vec<T>::free()
{
    if (this->element)
    {
        for (auto p = this->first_free; p != this->element; /*空*/)
            allo.destroy(--p);
        allo.deallocate(this->element, this->cap - this->element);
    }
}

template <typename T>
void Vec<T>::reallocate()
{
    auto newCapacity = this->size() ? 2 * this->size() : 1;
    auto data = allo.allocate(newCapacity);
    auto dest = data;
    auto elem = this->element;
    for (std::size_t i = 0; i != this->size(); ++i)
    {
        allo.construct(dest++, std::move(*elem++));
    }
    this->free();
    this->element = data;
    this->first_free = dest;
    this->cap = this->element + newCapacity;
}

/*
    检查空间是否足够容纳至少一个元素，如果不够，调用reallocate重新分配内存
*/
template <typename T>
void Vec<T>::check_n_allo()
{
    if (this->capacity() == this->size())
        this->reallocate();
}

#endif // VEC_H