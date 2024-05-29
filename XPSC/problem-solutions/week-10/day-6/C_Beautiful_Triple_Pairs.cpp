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

    map<tuple<int, int, int>, int> mp;
    vector<int> v(n);

    for (auto &x : v)
      cin >> x;

    long long ans = 0;

    for (int i = 0; i + 2 < n; i++)
    {
      ans += (mp[{v[i], v[i + 1], -1}] + mp[{v[i], -1, v[i + 2]}] + mp[{-1, v[i + 1], v[i + 2]}] - 3 * mp[{v[i], v[i + 1], v[i + 2]}]);
      mp[{v[i], v[i + 1], -1}]++;
      mp[{v[i], -1, v[i + 2]}]++;
      mp[{-1, v[i + 1], v[i + 2]}]++;
      mp[{v[i], v[i + 1], v[i + 2]}]++;
    }

    cout << ans << "\n";
  }

  return 0;
}