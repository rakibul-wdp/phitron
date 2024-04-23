#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int a, b, n;
    cin >> a >> b >> n;

    vector<int> v(n + 1);

    long long ans = 0;

    for (int i = 1; i <= n; i++)
    {
      cin >> v[i];
      if (v[i] >= a - 1)
        ans += a - 1;
      else
        ans += v[i];
    }

    ans += b;
    cout << ans << '\n';
  }

  return 0;
}