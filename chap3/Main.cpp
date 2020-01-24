/**
 * Template Method パターン
 * スーパークラスでテンプレートとなるメソッドを規定。
 * 同時にテンプレートメソッドの中で使用するメソッドを抽象メソッドとして同クラス内に宣言する。
 * このテンプレートクラスを継承することで, ロジックの骨組みを作ることができる。
 * また、テンプレートメソッドはオーバーライドされるべきではない。
 */

#include <memory>
#include "CharDisplay.hpp"
#include "StringDisplay.hpp"

int main() {
  std::unique_ptr<AbstractDisplay> charDisplay(new CharDisplay("HELLO"));
  std::unique_ptr<AbstractDisplay> stringDisplay(new StringDisplay("HELLO"));
  charDisplay->display();
  printf("\n");
  stringDisplay->display();
}