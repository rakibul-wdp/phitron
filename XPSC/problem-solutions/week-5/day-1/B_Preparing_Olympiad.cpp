#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, l, r, x;

  while (cin >> n >> l >> r >> x)
  {
    int arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    int ans = 0;

    for (int i = 0; i < (1 << n); i++)
    {
      int mx = INT_MIN, mn = INT_MAX;
      int sum = 0;

      for (int j = 0; j < n; j++)
      {
        if (i & (1 << j))
        {
          sum += arr[j];
          mx = max(mx, arr[j]);
          mn = min(mn, arr[j]);
        }
      }

      if (l <= sum && sum <= r && (mx - mn) >= x)
        ans++;
    }

    cout << ans << "\n";
  }

  return 0;
}