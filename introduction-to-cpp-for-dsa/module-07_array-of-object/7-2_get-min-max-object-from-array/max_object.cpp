#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
  string name;
  int roll;
  int marks;
};

int main()
{
  int n;
  cin >> n;

  Student arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i].name >> arr[i].roll >> arr[i].marks;

  Student mx;
  mx.marks = INT_MIN;

  for (int i = 0; i < n; i++)
  {
    if (arr[i].marks > mx.marks)
      mx = arr[i];
  }

  cout << mx.name << " " << mx.roll << " " << mx.marks << endl;

  return 0;
}