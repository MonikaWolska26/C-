#include <iostream>
#include <string>

class Parent {
public:
  virtual std::string method1() const
	{
	return "parent1";
	}

  std::string method2() const
  	{
	  return "parent2";
	}

  virtual std::string method3() const
  	{
	  return "child3";
	}

};

struct Child : Parent {
  std::string method1() const { return "child1"; }
  std::string method2() const { return "child2"; }
};

int main() {
  const Parent &parent = Parent();
  std::cout << parent.method1() << std::endl;
  const Parent &child = Child();
  std::cout << child.method1() << " " << child.method2() << " "
            << child.method3() << std::endl;
}


