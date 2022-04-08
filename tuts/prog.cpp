// #include <iostream>
#include <io/io.h>

using namespace std;

class Driving {


  int privateVal;

protected:
  int protectedVal = 30;

public:
  int pubVal = 20;

  Driving() {}
  Driving(int pval, int proval=20) {
    privateVal = pval;
    protectedVal = proval;
  };

  int getValue() { return privateVal; }
};




class SubClass : protected Driving {
  int scprivate;

public:
  SubClass(){

  };
  SubClass(int val, int pval) : Driving(val, pval) { this->scprivate = val; }
  int getProtected() { return this->protectedVal; }
};

class Third : protected SubClass {

public:
  Third(int val, int pval) : SubClass(val, pval) { this->protectedVal; }
  int getPubVal() { return this->protectedVal; }
};

class Fourth : Third {
public:
  Fourth(int val, int pval) : Third(val, pval) { this->protectedVal; }
};

namespace circle {

class Circle {
  void print() { cout << "I am circle." << endl; }
};

} // namespace circle

namespace rectangle {

class Rectangle {
public:
  void print() { cout << "I am rectangle." << endl; }
};

} // namespace rectangle

string mul(int a, int b) {

  function<string(void)> stringify = [&]() {
    int ans = a * b;
    return "The product is" + to_string(ans);
  };

  return stringify();
}

int main() {
  io();

  Driving driver(40,20);	 //making an object;
  // making a pointer
  cout<<driver.getValue();
  //  auto *ref = new Driving(40);
  //  cout << ref->getValue();

  //  auto sc = SubClass(10, 90);

  // auto rect = rectangle::Rectangle();
  // rect.print();

  // pair<int, int> nums = {1, 2};
  // auto [a, b] = nums;

  // cout << a << " " << b;

  // cout << mul(10, 20);
  return 0;
}