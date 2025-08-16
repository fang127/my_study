#include <iostream>
#include <memory>

class DebugDelete
{
public:
    DebugDelete(std::ostream &os_ = std::cout) : os(os_) {}

    template <typename Pointer>
    void operator()(Pointer *ptr) const
    {
        this->os << "delete unique_ptr" << std::endl;
        delete ptr;
    }

private:
    std::ostream &os;
};

int main()
{
    std::unique_ptr<int, DebugDelete> p(new int(), DebugDelete());

    return 0;
}