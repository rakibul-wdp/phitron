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

    vector<long long> a(n);

    long long minimum = INT_MAX;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      minimum = min(minimum, a[i]);
    }

    long long ans = 0;
    for (int i = 0; i < n; i++)
      ans += a[i] - minimum;

    cout << ans << "\n";
  }

  return 0;
}