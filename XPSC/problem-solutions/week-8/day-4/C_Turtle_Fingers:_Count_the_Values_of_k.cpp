#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    map<long long, bool> vis;
    int a, b, l;
    cin >> a >> b >> l;

    long long res = 0;

    for (int i = 1; i <= l; i *= a)
      for (int j = 1; j <= l; j *= b)
      {
        long long t = (long long)i * j;

        if (l % t == 0 && !vis[t])
        {
          res++;
          vis[t] = 1;
        }
      }

    cout << res << "\n";
  }

  return 0;
}