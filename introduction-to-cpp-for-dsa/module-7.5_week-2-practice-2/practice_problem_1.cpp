#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
  string name;
  int roll;
  int marks;
};

bool cmp(Student a, Student b)
{
  if (a.marks == b.marks)
    return a.roll < b.roll;
  else
    return a.marks > b.marks;
}

int main()
{
  int n;
  cin >> n;

  Student *arr = new Student[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
  }

  sort(arr, arr + n, cmp);

  for (int i = 0; i < n; i++)
  {
    cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
  }

  return 0;
}