#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int mx = 0;
  vector<int> v(n);

  for (auto &x : v)
  {
    cin >> x;
    mx = max(mx, x);
  }

  int gcd = 0;
  long long sum = 0;

  for (auto x : v)
  {
    gcd = __gcd(gcd, mx - x);
    sum += (mx - x);
  }

  long long ans = (gcd == 0 ? 0 : sum / gcd);
  cout << ans << " " << gcd << "\n";

  return 0;
}