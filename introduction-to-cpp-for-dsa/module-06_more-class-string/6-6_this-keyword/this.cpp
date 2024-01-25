#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
  string name;
  int age;
  Person(string name, int age)
  {
    this->name = name;
    this->age = age;
  }
  void hello()
  {
    cout << "hello" << endl;
  }
};

int main()
{
  Person abul("abul babul", 25);
  cout << abul.name << " " << abul.age << endl;

  return 0;
}