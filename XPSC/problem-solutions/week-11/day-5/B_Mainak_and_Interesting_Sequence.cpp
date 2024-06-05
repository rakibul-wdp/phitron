#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  long long n, i, j, m, f;

  while (t--)
  {
    f = 0;

    cin >> n >> m;
    long long a[n];

    if (m < n)
    {
      cout << "No\n";
      continue;
    }

    if ((n % 2) == 1)
    {
      for (i = 0; i < n - 1; i++)
        a[i] = 1;

      a[n - 1] = m - (n - 1);
    }
    else
    {
      for (i = 0; i < n - 2; i++)
        a[i] = 1;

      m = m - (n - 2);

      if (m > 0 && (m % 2) == 0)
      {
        a[n - 2] = m / 2;
        a[n - 1] = m / 2;
      }
      else
        f = 1;
    }

    if (f == 1)
      cout << "No\n";
    else
    {
      cout << "Yes\n";
      for (i = 0; i < n; i++)
        cout << a[i] << " ";

      cout << "\n";
    }
  }

  return 0;
}