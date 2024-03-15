#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  if (a < b)
  {
    int result = (b - a) + 1;
    cout << (b - a) + 1;
  }
  else
    cout << 0;

  return 0;
}