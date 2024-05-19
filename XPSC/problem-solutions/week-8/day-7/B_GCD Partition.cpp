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
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
      cin >> arr[i], sum += arr[i];
    }

    long long ans = 1, cur = 0;

    for (int i = 0; i < n - 1; i++)
    {
      cur += arr[i];
      sum -= arr[i];
      ans = max(ans, __gcd(cur, sum));
    }

    cout << ans << "\n";
  }

  return 0;
}