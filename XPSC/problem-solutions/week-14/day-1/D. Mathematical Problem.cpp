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

    string s;
    cin >> s;

    if (s.size() == 2)
    {
      if (s[0] == '0')
        cout << s[1] << '\n';
      else
        cout << s << '\n';
      continue;
    }

    long long ans = (1 << 20);

    for (int i = 0; i + 1 < n; i++)
    {
      vector<int> vals;

      for (int j = 0; j < n; j++)
      {
        if (j == i)
        {
          vals.push_back((s[j] - '0') * 10 + (s[j + 1] - '0'));
          j++;
        }
        else
          vals.push_back(s[j] - '0');
      }

      long long sum = 0;
      bool nulla = 0;
      for (auto x : vals)
      {
        if (x != 1)
          sum += x;
        if (x == 0)
          nulla = 1;
      }
      if (sum == 0)
        sum = 1;

      if (nulla)
        sum = 0;

      ans = min(ans, sum);
    }

    cout << ans << '\n';
  }

  return 0;
}