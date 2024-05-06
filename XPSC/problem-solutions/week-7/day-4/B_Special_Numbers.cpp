#include <bits/stdc++.h>
using namespace std;

int main()
{
  int MOD = 1e9 + 7;

  int t;
  cin >> t;

  while (t--)
  {
    int n, k;
    cin >> n >> k;

    long long res(0), cur(1);

    while (k)
    {
      if (k % 2)
      {
        res += cur;
        res %= MOD;
      }

      cur *= n;
      cur %= MOD;
      k /= 2;
    }

    cout << res << "\n";
  }

  return 0;
}