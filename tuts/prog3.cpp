#include "io/io.h"

class Student {
public:
  string name;
  int age;

  Student(string n, int a) {
    name = n;
    age = a;
  }

  string toString() {
    return ("{ name= " + name + " , age= " + to_string(age) + " }");
  }
};

int main() {
  io();
  unordered_map<string, vector<Student>> m;
  m.insert({"201900099", {Student("Gautam", 22)}});
  m.insert({"201900262", {Student("Adittya", 22),Student("Gautam", 22)}});
  m.insert({"201900097", {Student("Rishabh", 22)}});

  console::display(m, [](auto students) {
      console::display(students,[](auto s){
          cout << s.toString() <<", "; 
      });
  });



  return 0;
}
