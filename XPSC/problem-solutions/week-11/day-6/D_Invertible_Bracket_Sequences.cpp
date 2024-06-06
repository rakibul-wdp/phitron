#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    string s;
    cin >> s;

    map<int, int> cnt;
    int b = 0;
    ++cnt[b];
    long long ans = 0;

    for (auto &c : s)
    {
      b += (c == '(' ? +1 : -1);
      ans += cnt[b];
      ++cnt[b];

      while (cnt.begin()->first * 2 < b)
        cnt.erase(cnt.begin());
    }

    cout << ans << '\n';
  }

  return 0;
}