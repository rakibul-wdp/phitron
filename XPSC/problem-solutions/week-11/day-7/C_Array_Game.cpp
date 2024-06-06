#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    long long n, k;
    cin >> n >> k;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    if (k >= 3)
    {
      cout << 0 << "\n";
      continue;
    }

    sort(begin(a), end(a));
    long long d = a[0];

    for (int i = 0; i < n - 1; i++)
      d = min(d, a[i + 1] - a[i]);

    if (k == 1)
    {
      cout << d << "\n";
      continue;
    }

    for (int i = 0; i < n; i++)
      for (int j = 0; j < i; j++)
      {
        long long v = a[i] - a[j];
        long long p = lower_bound(begin(a), end(a), v) - begin(a);
        if (p < n)
          d = min(d, a[p] - v);
        if (p > 0)
          d = min(d, v - a[p - 1]);
      }
    cout << d << "\n";
  }

  return 0;
}