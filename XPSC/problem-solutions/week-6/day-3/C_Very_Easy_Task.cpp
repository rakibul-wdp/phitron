#include <bits/stdc++.h>
using namespace std;

bool possible(int t, int n, int x, int y)
{
  if (t < min(x, y))
    return false;

  int count = 1;
  t -= min(x, y);
  count += t / x + t / y;

  return count >= n;
}

int main()
{
  int n, x, y;
  cin >> n >> x >> y;

  int l = 0, r = max(x, y) * n, mid;

  while (l + 1 < r)
  {
    mid = l + (r - l) / 2;
    if (possible(mid, n, x, y))
      r = mid;
    else
      l = mid;
  }

  cout << r;

  return 0;
}