/**
 * Adapter Pattern
 */

#ifndef __INC_PRINT__
#define __INC_PRINT__

#include <iostream>

class Print {
public:
    virtual void print_weak() = 0;
    virtual void print_strong() = 0;
};

class Banner {
private:
    std::string str;
public:
    Banner(std::string str);
    void show_with_paren();
    void show_with_a_ster();
};

#endif // __INC_PRINT__
