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
};

int main()
{
  Person *abul = new Person("abul babul", 24);
  Person *babul = new Person("babul cabul", 25);

  // abul = babul;
  // abul->name = babul->name;
  // abul->age = babul->age;

  *abul = *babul;

  delete babul;

  cout << abul->name << " " << abul->age << endl;

  return 0;
}