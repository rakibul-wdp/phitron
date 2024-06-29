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

    long long l, r;
    cin >> l >> r;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
      cin >> a[i];

    long long sum = 0;
    int ans = 0;
    int start = 0;

    for (int i = 0; i < n; i++)
    {
      if (a[i] > r)
      {
        sum = 0;
        start = i + 1;
        continue;
      }

      sum += a[i];
      while (sum > r)
      {
        sum -= a[start];
        start++;
      }

      if (sum >= l && sum <= r)
      {
        ans++;
        sum = 0;
        start = i + 1;
      }
    }

    cout << ans << "\n";
  }

  return 0;
}