#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
long long n, m, p[N];

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    cin >> n >> m;

    long long k = 1;

    for (int i = 1; i <= m; i++)
    {
      if (i & 1)
      {
        for (int j = i; j <= n; j += m)
        {
          p[j] = k;
          k++;
        }
      }
      else
      {
        for (int j = (n - i) / m * m + i; j > 0; j -= m)
        {
          p[j] = k;
          k++;
        }
      }
    }

    for (int i = 1; i <= n; i++)
      cout << p[i] << " ";
    cout << "\n";
  }

  return 0;
}