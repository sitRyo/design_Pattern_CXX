//
// Created by seriru on 2020/01/26.
//

#include "IDCardFactory.hpp"
#include <memory>

int main() {
  std::unique_ptr<Factory> factory(new IDCardFactory());
  std::shared_ptr<Product> card1(factory->create("結城先生"));
  std::shared_ptr<Product> card2(factory->create("ボブ"));

  card1->use();
  card2->use();
}

