#include <bits/stdc++.h>
using namespace std;

int main()
{
  int *a = new int;
  *a = 10;
  cout << *a << " : " << a << endl;
  delete a;
  cout << *a << " : " << a << endl;

  return 0;
}