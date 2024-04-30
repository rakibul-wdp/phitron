#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long x, y;
  cin >> x >> y;

  int count = 0;
  while (x * 2 <= y)
  {
    x *= 2;
    count++;
  }

  cout << count + 1 << endl;

  return 0;
}