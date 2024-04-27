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

    int a[n], c[n + 1];

    for (int i = 0; i <= n; i++)
      c[i] = 0;

    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      c[a[i]]++;
    }

    sort(a, a + n);

    int ans = 0;

    for (int k = 1; 2 * k - 2 < n; k++)
    {
      int i, j;
      for (i = 2 * k - 2, j = k; i >= k - 1; i--, j--)
      {
        if (a[i] > j)
          break;
      }

      if (j == 0)
        ans = k;
      else
        break;
    }

    cout << ans << "\n";
  }

  return 0;
}