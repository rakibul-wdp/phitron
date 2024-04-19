#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int a, b, c;
    cin >> a >> b >> c;

    int x = abs(c - b) + c;
    if (a == x)
      cout << 3 << "\n";
    else if (a < x)
      cout << 1 << "\n";
    else
      cout << 2 << "\n";
  }

  return 0;
}