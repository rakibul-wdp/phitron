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
  Student *abul = new Student(22, 4, 3.22);
  return abul;
}

int main()
{
  Student *res = fun();

  cout << res->roll << " " << res->cls << " " << res->gpa << endl;

  delete res;

  return 0;
}