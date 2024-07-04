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

    vector<long long> arr(n);

    for (int i = 0; i < n; i++)
      cin >> arr[i];

    map<double, long long> mp;
    long long ans = 0;

    for (int i = n - 1; i >= 0; i--)
    {
      double key = arr[i] - log2(arr[i]);
      ans += mp[key];
      mp[key]++;
    }

    cout << ans << "\n";
  }

  return 0;
}