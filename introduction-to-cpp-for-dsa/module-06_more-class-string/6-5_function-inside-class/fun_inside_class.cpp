#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
  string name;
  int age;
  int physic_marks;
  int math_marks;
  Person(string nm, int ag, int pm, int mm)
  {
    name = nm;
    age = ag;
    physic_marks = pm;
    math_marks = mm;
  }
  void hello()
  {
    cout << name << " " << age << endl;
  }
  int total_marks()
  {
    return physic_marks + math_marks;
  }
};

int main()
{
  Person abul("abul babul", 24, 55, 78);
  cout << abul.total_marks() << endl;

  return 0;
}