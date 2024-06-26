#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    long long n;
    cin >> n;

    if ((n & (n - 1)) == 0)
    {
      cout << 0 << "\n";
      continue;
    }

    vector<long long> vec;

    for (long long i = 0; i <= 60; i++)
    {
      long long num = (1LL << i);
      vec.push_back(num);
    }

    string s = to_string(n);
    long long ans = 1e9;
    long long sz = s.size();

    for (long long ii = 0; ii < vec.size(); ii++)
    {
      long long num = vec[ii];
      string t = to_string(num);
      long long sz1 = t.size();
      long long res = 0;
      long long i = 0, j = 0;
      while (i < sz && j < sz1)
      {
        if (s[i] == t[j])
          i++, j++;
        else
        {
          res++;
          i++;
        }
      }

      if (i == sz && j != sz1)
        res += sz1 - j;

      else if (i != sz && j == sz1)
        res += sz - i;
      ans = min(ans, res);
    }

    cout << ans << "\n";
  }

  return 0;
}