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

    map<int, int> mp;
    int x;

    for (int i = 0; i < n; i++)
    {
      cin >> x;
      mp[x]++;
    }

    auto it = mp.begin();
    int last = it->first;
    int ans = it->second;
    int lastCount = it->second;
    it++;

    while (it != mp.end())
    {
      if (it->first != (last + 1))
        ans += it->second;
      else
        ans += max(0, it->second - lastCount);

      last = it->first;
      lastCount = it->second;

      it++;
    }

    cout << ans << "\n";
  }

  return 0;
}