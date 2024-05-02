#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;

  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  long long low = 0, hi = 1e18, ans = 1e18;

  while (low <= hi)
  {
    long long mid = (low + hi) / 2;
    long long products = 0;

    for (int i = 0; i < n; i++)
      products += min(mid / arr[i], (long long)1e9);

    if (products >= m)
    {
      if (mid < ans)
        ans = mid;

      hi = mid - 1;
    }
    else
      low = mid + 1;
  }

  cout << ans;

  return 0;
}