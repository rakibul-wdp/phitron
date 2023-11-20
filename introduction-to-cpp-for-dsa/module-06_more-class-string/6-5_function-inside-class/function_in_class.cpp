#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
  string name;
  int age;
  int math_mark;
  int physic_mark;
  Person(string nm, int ag, int mm, int pm)
  {
    name = nm;
    age = ag;
    math_mark = mm;
    physic_mark = pm;
  }
  void hello()
  {
    cout << name << " " << age << endl;
  }
  int total_mark()
  {
    return math_mark + physic_mark;
  }
};

int main()
{
  Person abul("abul babul", 23, 78, 35);

  int res = abul.total_mark();
  cout << res << endl;

  return 0;
}