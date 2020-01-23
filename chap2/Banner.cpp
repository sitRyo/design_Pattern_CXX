/**
 * Adapter Pattern
 */

#include "Print.hpp"
#include <iostream>
#include <string>

Banner::Banner(std::string str) : str(str) {}
  void Banner::show_with_paren() {
  std::cout << "(" << this->str << ")" << std::endl;
}

void Banner::show_with_a_ster() {
  std::cout << "*" << this->str << "*" << std::endl;
}