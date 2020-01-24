#ifndef __INC_CHAR_DISPLAY__
#define __INC_CHAR_DISPLAY__

#include <iostream>
#include <string>

#include "AbstractDisplay.hpp"

class CharDisplay : public AbstractDisplay {
  std::string ch;
public:
  CharDisplay(std::string ch) : ch(ch) {}

  void open() override {
    std::cout << "<<";
  }

  void print() override {
    std::cout << ch;
  }

  void close() override {
    std::cout << ">>";
  }
};

#endif // __INC_CHAR_DISPLAY__