#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int l = 1, ans;
  map<int, int> mp;

  for (int r = 1; r <= n; r++)
  {
    int k;
    cin >> k;

    if (mp[k])
    {
      ans = max(ans, r - l);
      l = max(l, mp[k] + 1);
      mp[k] = r;
    }
    else
    {
      ans = max(ans, r - l + 1);
      mp[k] = r;
    }
  }

  ans = max(n - l + 1, ans);
  cout << ans << "\n";

  return 0;
}