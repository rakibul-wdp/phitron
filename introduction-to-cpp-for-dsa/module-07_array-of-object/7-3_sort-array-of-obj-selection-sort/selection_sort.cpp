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

  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[i].marks < arr[j].marks)
        swap(arr[i], arr[j]);
      if (arr[i].marks == arr[j].marks)
      {
        if (arr[i].roll > arr[j].roll)
          swap(arr[i], arr[j]);
      }
    }
  }

  for (int i = 0; i < n; i++)
    cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;

  return 0;
}