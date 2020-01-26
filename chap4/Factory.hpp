//
// Created by seriru on 2020/01/26.
//

#ifndef CHAP4_FACTORY_H
#define CHAP4_FACTORY_H

#include <iostream>
#include <string>
#include <memory>

#include "Product.hpp"


class Factory {
protected:
  virtual std::shared_ptr<Product> create_product(std::string const& owner) = 0;
  virtual void register_product(std::shared_ptr<Product> const& product) = 0; // product.use_countは変わらない
public:
  virtual std::shared_ptr<Product> create(std::string const& owner) final {
    std::shared_ptr<Product> p = this->create_product(owner);
    this->register_product(p);
    return p;
  }
};

#endif //CHAP4_FACTORY_H
