#include <bits/stdc++.h>
using namespace std;

const int N = 200010;
long long a[N];

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    long long n, c, d;
    cin >> n >> c >> d;

    for (int i = 1; i <= n; i++)
      cin >> a[i];

    sort(a + 1, a + n + 1);
    reverse(a + 1, a + n + 1);

    for (int i = 2; i <= n; i++)
      a[i] += a[i - 1];

    if (a[1] * d < c)
    {
      cout << "Impossible" << "\n";
      continue;
    }

    if (a[min(n, d)] >= c)
    {
      cout << "Infinity" << "\n";
      continue;
    }

    auto check = [&](int mid)
    {
      long long sum = 0, dd = d / mid, yy = d % mid;

      if (mid >= n)
        sum += dd * a[n];
      else
        sum += dd * a[mid];

      if (yy >= n)
        sum += a[n];
      else
        sum += a[yy];

      if (sum < c)
        return false;
      else
        return true;
    };

    int l = 1, r = 200000;

    while (l < r)
    {
      int mid = (l + r + 1) >> 1;
      if (check(mid))
        l = mid;
      else
        r = mid - 1;
    }

    cout << l - 1 << "\n";
  }

  return 0;
}