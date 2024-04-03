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

    int arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    if (n == 1)
    {
      cout << 0 << "\n";
      continue;
    }

    int ans = arr[n - 1] - arr[0];

    for (int i = 0; i < n - 1; i++)
      ans = max(ans, arr[i] - arr[0]);

    for (int i = 0; i <= n - 2; i++)
      ans = max(ans, arr[n - 1] - arr[i]);

    for (int i = 1; i <= n - 1; i++)
      ans = max(ans, arr[i - 1] - arr[i]);

    cout << ans << "\n";
  }

  return 0;
}