#include <bits/stdc++.h>
using namespace std;

long long a[200005];

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    long long i, pre, tempMax = -0x3f3f3f3f, ans = 0;
    for (i = 1; i <= n; i++)
    {
      cin >> a[i];
      if (i == 1)
      {
        if (a[i] > 0)
          pre = 1;
        else
          pre = -1;
        tempMax = a[1];
      }
      else
      {
        if (a[i] * pre < 0)
        {
          pre = -pre;
          ans += tempMax;
          tempMax = a[i];
        }
        else
          tempMax = max(tempMax, a[i]);
      }
    }

    ans += tempMax;
    cout << ans << "\n";
  }

  return 0;
}