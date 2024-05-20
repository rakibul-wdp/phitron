#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int x, y;
    cin >> y >> x;

    long long maxi = max(x, y);
    long long square = (maxi - 1) * (maxi - 1);

    if (maxi % 2 == 0)
    {
      if (x > y)
        cout << square + y << "\n";
      else
        cout << (maxi * maxi) - x + 1 << "\n";
    }
    else
    {
      if (x > y)
        cout << (maxi * maxi) - y + 1 << "\n";
      else
        cout << square + x << "\n";
    }
  }

  return 0;
}