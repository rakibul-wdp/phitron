#include <bits/stdc++.h>
using namespace std;

struct one
{
  int p, t, ty;
} a[200005];

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, m;
    cin >> n >> m;

    const int N = n + m + 1;
    for (int i = 1; i <= N; ++i)
      cin >> a[i].p;

    for (int i = 1; i <= N; ++i)
    {
      cin >> a[i].t;
      a[i].ty = (a[i].p > a[i].t ? 1 : 2);
    }

    int cnt_n = 0, cnt_m = 0, idx = 0;
    long long sum = 0;

    for (int i = 1; i <= N; ++i)
    {
      if (!idx && (a[i].ty == 1 && n == cnt_n || a[i].ty == 2 && m == cnt_m))
      {
        idx = i;
        continue;
      }

      if (a[i].ty == 1 && n == cnt_n)
        sum += a[i].t, ++cnt_m, a[i].ty = 2;
      else if (a[i].ty == 2 && m == cnt_m)
        sum += a[i].p, ++cnt_n, a[i].ty = 1;
      else if (a[i].ty == 1)
        sum += a[i].p, ++cnt_n;
      else
        sum += a[i].t, ++cnt_m;
    }

    for (int i = 1; i <= N; ++i)
    {
      if (a[i].ty == 1)
        cout << sum - a[i].p + a[idx].p;
      else
        cout << sum - a[i].t + a[idx].t;
      cout << ' ';
    }
    cout << "\n";
  }

  return 0;
}