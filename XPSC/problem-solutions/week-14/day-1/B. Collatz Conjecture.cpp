#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    long long x, y, k;
    cin >> x >> y >> k;

    while (k > 0)
    {
      long long need = min(k, y - x % y);
      if (k >= need)
      {
        x += need;
        k -= need;
      }
      else
      {
        x += k;
        k = 0;
        break;
      }
      while (x % y == 0)
        x /= y;
      if (x == 1)
        break;
    }

    if (k)
      x = k % (y - 1) + 1;

    cout << x << '\n';
  }

  return 0;
}