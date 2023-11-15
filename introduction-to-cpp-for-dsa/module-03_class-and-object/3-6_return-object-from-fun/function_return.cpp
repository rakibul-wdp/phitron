#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
  int roll;
  int cls;
  double gpa;
  Student(int roll, int cls, double gpa)
  {
    this->roll = roll;
    this->cls = cls;
    this->gpa = gpa;
  }
};

Student *fun()
{
  Student abul(33, 4, 3.85);
  Student *p = &abul;
  return p;
}

int main()
{
  Student *res = fun();

  cout << res->roll << " " << res->cls << " " << res->gpa << endl;

  return 0;
}