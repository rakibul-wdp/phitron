#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, q;
    cin >> n >> q;

    long long arr[n + 5], pref[n + 5];
    memset(pref, 0, sizeof(pref));

    for (int i = 1; i <= n; i++)
      cin >> arr[i];

    for (int i = 1; i <= n; i++)
      pref[i] = pref[i - 1] + arr[i];

    while (q--)
    {
      int l, r, k;
      cin >> l >> r >> k;

      long long sum = pref[n] - pref[r] + pref[l - 1];

      sum = sum + ((r - l + 1) * k);

      if (sum % 2 == 1)
        cout << "YES"
             << "\n";
      else
        cout << "NO"
             << "\n";
    }
  }

  return 0;
}