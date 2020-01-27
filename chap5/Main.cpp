//
// Created by seriru on 2020/01/27.
//

#include "Singleton.hpp"

int main() {
  Singleton& singleton = Singleton::get_instance(); // called constructor
  singleton.use();
  Singleton& singleton1 = Singleton::get_instance(); // don't called constructor
  singleton1.use();
}