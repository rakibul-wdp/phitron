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
  Student abul(27, 7, 4.58);
  Student babul(21, 6, 4.33);

  cout << abul.roll << " " << abul.cls << " " << abul.gpa << endl;
  cout << babul.roll << " " << babul.cls << " " << babul.gpa << endl;

  return 0;
}