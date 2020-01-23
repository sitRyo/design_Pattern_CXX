#include "Print.hpp"
#include <iostream>
#include <string>
#include <memory>

class PrintBanner : public Banner, public Print {
  public:
    PrintBanner(std::string str) : Banner(str) {}
    void print_weak() override {
      show_with_paren();
    }
    void print_strong() override {
      show_with_a_ster();
    }
};

int main() {
  std::unique_ptr<Print> printer(new PrintBanner("HELLO"));
  printer->print_strong();
  printer->print_weak();
}