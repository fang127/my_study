#ifndef SCREEN_H
#define SCREEN_H
#include <iostream>
#include <string>
#include <vector>

class Window_mgr;

class Screen
{
    friend class Window_mgr;

public:
    typedef std::string::size_type pos;

    Screen() = default;
    Screen(pos h, pos w) : height(h), width(w), contents(h * w, ' ') {}
    Screen(pos h, pos w, char ch) : height(h), width(w), contents(h * w, ch) {}
    char get() const
    {
        return this->contents[this->height * this->width];
    }
    char get(pos h, pos w) const;
    Screen &move(pos r, pos c);
    Screen &set(char ch);
    Screen &set(pos h, pos w, char ch);
    Screen &display(std::ostream &os);
    const Screen &display(std::ostream &os) const;
    pos size() const;

private:
    void do_display(std::ostream &os) const { os << this->contents; }
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};

inline Screen &Screen::move(pos r, pos c)
{
    pos row = r * this->width;
    this->cursor = row + c;
    return *this;
}

#endif // SCREEN_H