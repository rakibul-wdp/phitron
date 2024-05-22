#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, k, q;
    cin >> n >> k >> q;

    vector<long long> a(k + 1), b(k + 1);
    a[0] = 0;
    b[0] = 0;

    for (int i = 1; i <= k; i++)
      cin >> a[i];

    for (int i = 1; i <= k; i++)
      cin >> b[i];

    for (int i = 0; i < q; i++)
    {
      long long c;
      cin >> c;

      int l = 0, r = k;
      while (l <= r)
      {
        int mid = l + r >> 1;
        if (a[mid] > c)
          r = mid - 1;
        else
          l = mid + 1;
      }

      if (a[r] == c)
      {
        cout << b[r] << " ";
        continue;
      }

      long long ans = b[r] + (c - a[r]) * (b[r + 1] - b[r]) / (a[r + 1] - a[r]);
      cout << ans << " ";
    }

    cout << "\n";
  }

  return 0;
}