#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    string a, b;
    cin >> a >> b;

    long long best = 1e9 + 10;

    for (int i = 0; i < (int)b.size(); i++)
    {
      long long x = 0, y = i;

      while (x < (int)a.size() and y < (int)b.size())
      {
        if (a[x] == b[y])
          y++;

        x++;
      }

      best = min(best, i + (int)b.size() - y);
    }

    cout << (int)a.size() + best << '\n';
  }

  return 0;
}