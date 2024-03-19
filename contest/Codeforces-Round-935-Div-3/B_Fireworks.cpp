#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    long long a, b, c;
    cin >> a >> b >> c;

    long long ans = 2;

    ans += c / a;
    ans += c / b;

    cout << ans << "\n";
  }

  return 0;
}