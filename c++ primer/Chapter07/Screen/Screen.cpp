#include "Screen.h"

char Screen::get(pos r, pos c) const
{
    pos row = r * this->width;
    return this->contents[row + c];
}

Screen &Screen::set(char ch)
{
    this->contents[this->cursor] = ch;
    return *this;
}

Screen &Screen::set(pos r, pos c, char ch)
{
    this->contents[r * this->width + c] = ch;
    return *this;
}

Screen &Screen::display(std::ostream &os)
{
    this->do_display(os);
    return *this;
}

const Screen &Screen::display(std::ostream &os) const
{
    this->do_display(os);
    return *this;
}

Screen::pos Screen::size() const
{
    return this->height * this->width;
}