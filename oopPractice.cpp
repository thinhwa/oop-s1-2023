#include <iostream>
using namespace std;

class person {
 private:
  string name;
  int age;
  int height;
  void introduce() {
    std::cout << "Hi my name is" << name << ", I am" << age << "and" << height
              << "cm tall!" << endl;
  }

 public:
  void setName(string name) {  // setter
    name = name;
  } 
  string getName() {  // getter
    return name;
  }
  person (string name, int age, int height){
    this -> name = name;
    this -> age = age;
    this -> height = height;
  }

};
int main() {
  person person1 = person("thinh", 18, 176);

  person1.setName("thinh");
  cout << person1.getName() << " is cool";

  return 0;
}
