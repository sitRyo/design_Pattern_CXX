//
// Created by seriru on 2020/01/26.
//

#include "Product.hpp"

#include <iostream>
#include <string>

class IDCard : public Product {
  std::string owner;
public:
  IDCard(std::string const& owner) : owner(owner) {
    std::cout << owner << "のカードを作ります。\n";
  }

  void use() override {
    std::cout << owner << "のカードを使います。\n";
  }

  std::string get_owner() {
    return owner;
  };
};