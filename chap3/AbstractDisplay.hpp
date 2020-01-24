#ifndef __INC_ABSTRACT_DISPLAY__
#define __INC_ABSTRACT_DISPLAY__

class AbstractDisplay {
public:
  virtual void open() = 0;
  virtual void print() = 0;
  virtual void close() = 0;
  virtual void display() final {
    this->open();
    for (int i = 0; i < 5; ++i) {
      this->print();
    }
    this->close();
  }
};

#endif // __INC_ABSTRACT_DISPLAY__