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

    int a[n + 10];
    map<int, int> mp;
    int mx = 0;

    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      mp[a[i]]++;
      mx = max(mp[a[i]], mx);
    }

    int q = n - mx;

    if (q >= mx)
    {
      if (n % 2)
        cout << 1 << "\n";
      else
        cout << 0 << "\n";
    }
    else
      cout << mx - q << "\n";
  }

  return 0;
}