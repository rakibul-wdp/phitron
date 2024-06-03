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

    int x = 1;
    vector<int> ans;

    while (x <= n)
    {
      ans.push_back(x);
      x <<= 1;
    }

    if (x != n)
    {
      x >>= 1;
      int temp = n - x;
      int pw = 1;
      vector<int> v;

      while (temp)
      {
        if (temp & 1)
          v.push_back(pw);

        temp >>= 1;
        pw <<= 1;
      }
      reverse(v.begin(), v.end());
      for (auto &i : v)
      {
        x += i;
        ans.push_back(x);
      }
    }

    int sz = ans.size();
    cout << sz << '\n';

    for (int i = sz - 1; i >= 0; i--)
      cout << ans[i] << ' ';

    cout << '\n';
  }

  return 0;
}