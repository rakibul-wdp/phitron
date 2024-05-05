#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    long long k, n;
    cin >> n >> k;

    vector<int> pos, neg;

    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;

      if (x > 0)
        pos.push_back(x);
      else if (x < 0)
        neg.push_back(-x);
    }

    sort(pos.begin(), pos.end());
    sort(neg.begin(), neg.end());

    long long ans = 0;

    for (int i = pos.size() - 1; i >= 0; i -= k)
      ans += 2 * pos[i];

    for (int i = neg.size() - 1; i >= 0; i -= k)
      ans += 2 * neg[i];

    ans -= max((pos.empty() ? 0 : pos.back()), (neg.empty() ? 0 : neg.back()));

    cout << ans << "\n";
  }

  return 0;
}