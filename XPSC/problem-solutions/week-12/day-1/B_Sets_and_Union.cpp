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

    set<int> s[n];
    set<int> s2;

    for (int i = 0; i < n; i++)
    {
      int k;
      cin >> k;

      for (int j = 0; j < k; j++)
      {
        int b;
        cin >> b;
        s[i].insert(b);
        s2.insert(b);
      }
    }

    int res = 0;
    int len = s2.size();

    for (int i = 1; i <= 50; i++)
    {
      s2.clear();

      for (int j = 0; j < n; j++)
      {
        if (s[j].count(i) == 0)
          s2.insert(s[j].begin(), s[j].end());
      }

      if (res < s2.size() && s2.size() < len)
        res = s2.size();
    }

    cout << res << "\n";
  }

  return 0;
}