#include "Sales_data.h"

// Member functions
inline double Sales_data::avg_price() const
{
    if (units_sold)
        return revenue / units_sold;
    else
        return 0.0;
}

Sales_data &Sales_data::combine(const Sales_data &ths)
{
    this->units_sold += ths.units_sold;
    this->revenue += ths.revenue;
    return *this;
}

std::istream &read(std::istream &is, Sales_data &ths)
{
    double price = 0;
    is >> ths.bookNo >> ths.units_sold >> price;
    ths.revenue = price * ths.units_sold;
    return is;
}

std::ostream &print(std::ostream &os, const Sales_data &ths)
{
    os << ths.isbn() << " " << ths.units_sold << " " << ths.revenue << " " << ths.avg_price();
    return os;
}

Sales_data::Sales_data(std::istream &is)
{
    read(is, *this);
}