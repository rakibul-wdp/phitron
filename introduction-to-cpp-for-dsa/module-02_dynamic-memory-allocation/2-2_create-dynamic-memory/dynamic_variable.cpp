#include <bits/stdc++.h>
using namespace std;

int *fun()
{
  int *a = new int;
  cout << "fun: " << a << endl;
  *a = 100;
  return a;
}

int main()
{
  int *p = fun();
  cout << "main: " << *p << endl;

  int *a = new int;
  *a = 10;
  cout << *a << endl;

  float *f = new float;
  *f = 1.587;
  cout << *f << endl;

  return 0;
}