#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    long long v1 = 0, v2 = 0;

    for (int i = 0; i < n; i += 2)
      v1 = __gcd(v1, a[i]);
    for (int i = 1; i < n; i += 2)
      v2 = __gcd(v2, a[i]);

    bool ok = true;

    for (int i = 0; i < n; i += 2)
    {
      if (a[i] % v2 == 0)
      {
        ok = false;
        break;
      }
    }

    if (ok)
    {
      cout << v2 << "\n";
      continue;
    }

    ok = true;

    for (int i = 1; i < n; i += 2)
    {
      if (a[i] % v1 == 0)
      {
        ok = false;
        break;
      }
    }

    if (ok)
    {
      cout << v1 << "\n";
      continue;
    }

    cout << 0 << "\n";
  }

  return 0;
}