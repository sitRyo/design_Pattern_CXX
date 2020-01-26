//
// Created by seriru on 2020/01/26.
//

#include "Factory.hpp"
#include "IDCard.hpp"

#include <vector>
#include <string>
#include <memory>

class IDCardFactory : public Factory {
  std::vector<std::shared_ptr<Product>> owners;
protected:
  std::shared_ptr<Product> create_product(std::string const& owner) {
    return std::shared_ptr<Product>(new IDCard(owner));
  };
  void register_product(std::shared_ptr<Product> const& product) {
    this->owners.push_back(product);
  }
public:
  std::vector<std::shared_ptr<Product>> get_owners() {
    return this->owners;
  }
};
