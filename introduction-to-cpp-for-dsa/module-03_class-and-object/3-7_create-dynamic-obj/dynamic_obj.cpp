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

int main()
{
  Student *babul = new Student(22, 3, 3.58);

  cout << babul->roll << " " << babul->cls << " " << babul->gpa << endl;

  return 0;
}