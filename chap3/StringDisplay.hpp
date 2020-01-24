#ifndef __INC_STRING_DISPLAY__
#define __INC_STRING_DISPLAY__

#include <string>
#include <iostream>

#include "AbstractDisplay.hpp"

class StringDisplay : public AbstractDisplay {
  std::string str;
  int width;

public:
  StringDisplay(std::string str) : str(str), width(str.size()) {}

  void open() override {
    this->printLine();
  }

  void print() override {
    std::cout << "| " << this->str << " |" << std::endl;
  }

  void close() override {
    this->printLine();
  }

  void printLine() {
    std::cout << "+";
    for (int i = 0; i < width; ++i) {
      std::cout << "-";
    }
    std::cout << "+" << std::endl;
  }
};

#endif // __INC_STRING_DISPLAY__