#include <bits/stdc++.h>
using namespace std;

int n = 5;

int main()
{
  int n, q;
  cin >> n >> q;

  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];

  vector<int> d(n + 1);
  for (int i = 1; i <= q; i++)
  {
    int l, r;
    cin >> l >> r;
    l--, r--;
    d[l]++;
    d[r + 1]--;
  }

  for (int i = 1; i <= n; i++)
    d[i] = d[i - 1] + d[i];

  sort(v.rbegin(), v.rend());
  sort(d.rbegin(), d.rend());

  long long ans = 0;

  for (int i = 0; i < n; i++)
    ans += (1LL * d[i] * v[i]);

  cout << ans << "\n";

  return 0;
}