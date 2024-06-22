#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    long long n, k;
    cin >> n >> k;

    long long a[n], i;
    for (i = 0; i < n; i++)
      cin >> a[i];

    long long j, x, p, z, y;
    long long sum = 0;

    for (i = 30; i >= 0; i--)
    {
      p = 0;
      x = pow(2, i);

      for (j = 0; j < n; j++)
      {
        y = a[j] & x;
        if (y == 0)
          p++;
      }

      if (p <= k)
      {
        k -= p;
        sum = sum + x;
      }
    }

    cout << sum;
    cout << "\n";
  }

  return 0;
}