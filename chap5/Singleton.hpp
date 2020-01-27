//
// Created by seriru on 2020/01/27.
//

#ifndef __INC_SINGLETON__
#define __INC_SINGLETON__

#include <iostream>

class Singleton {
  // コンストラクタとコピーコンストラクタはprivateで宣言する
  // これにより勝手にinstantiateされる可能性がなくなる。
  Singleton(){
    std::cout << "called" << std::endl;
  }
  Singleton(const Singleton&& rhs) {}
  Singleton& operator=(const Singleton& rhs) {}

public:
  // staticメンバ関数はクラス固有のメソッドを定義する
  static Singleton& get_instance() {
    static Singleton singleton; // ローカルstatic変数。スコープを抜けても変数の値がそのまま保持される。
    return singleton;
  }

  void use() {
    std::cout << "singletonが使用されます。" << std::endl;
  }
};

#endif