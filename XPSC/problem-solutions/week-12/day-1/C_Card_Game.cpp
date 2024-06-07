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

    long long ans = 0, sum = 0;

    int arr[n];
    for (int i = 1; i <= n; i++)
      cin >> arr[i];

    for (int i = n; i >= 1; i--)
    {
      if (i & 1)
        ans = max(ans, arr[i] + sum);
      else
        ans = max(ans, sum);

      sum += max(arr[i], 0);
    }

    cout << ans << "\n";
  }

  return 0;
}