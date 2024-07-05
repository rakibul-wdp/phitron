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

    int fq[10] = {0};
    for (int i = 0; i < n; i++)
    {
      int tm;
      cin >> tm;
      tm = tm % 10;
      fq[tm] += 1;
    }

    bool ans = false;
    for (int i = 0; i < 10; i++)
    {
      if (fq[i] > 0)
      {
        fq[i]--;
        for (int j = 0; j < 10; j++)
        {
          if (fq[j] > 0)
          {
            fq[j]--;
            int tm = 23 - i - j;
            tm %= 10;
            if (fq[tm] > 0)
            {
              ans = true;
              break;
            }
            fq[j]++;
          }
        }
        fq[i]++;
        if (ans)
          break;
      }
    }
    if (ans)
      cout << "YES\n";
    else
      cout << "NO\n";
  }

  return 0;
}