#include <bits/stdc++.h>
using namespace std;

int a[200050];

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, k, d, w;
    cin >> n >> k >> d >> w;

    for (int i = 1; i <= n; i++)
      cin >> a[i];

    int ans = 1, last = 1;

    for (int i = 1; i <= n; i++)
      if (a[i] - a[last] > d + w || i - last + 1 > k)
      {
        ans++;
        last = i;
      }

    cout << ans << "\n";
  }

  return 0;
}