#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, x;
    cin >> n >> x;

    vector<long long> v(n);
    for (int i = 0; i < n; i++)
      cin >> v[i];

    int l = 1, r = INT_MAX;
    long long ans = r;

    while (l <= r)
    {
      int mid = (r - l) / 2 + l;
      long long res = 0;

      for (long long &i : v)
        if (mid > i)
          res += (mid - i);

      if (res <= x)
      {
        ans = mid;
        l = mid + 1;
      }
      else
        r = mid - 1;
    }

    cout << ans << "\n";
  }

  return 0;
}