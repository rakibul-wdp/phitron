#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long n, a, b, p, q;
  cin >> n >> a >> b >> p >> q;

  long long ans = n / a * p + n / b * q;
  long long l = n / (a * b / __gcd(a, b));

  if (max(q, p) == p)
    ans -= l * q;
  else
    ans -= l * p;

  cout << ans;

  return 0;
}