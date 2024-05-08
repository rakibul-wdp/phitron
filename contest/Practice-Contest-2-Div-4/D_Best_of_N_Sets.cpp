#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int x, y;
    cin >> x >> y;

    if (x > y)
      cout << (x - 1) + x << endl;
    else
      cout << (y - 1) + y << endl;
  }

  return 0;
}