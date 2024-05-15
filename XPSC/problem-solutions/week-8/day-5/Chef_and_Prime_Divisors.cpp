#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    long long a, b;
    cin >> a >> b;

    long long g = __gcd(a, b);

    while (g != 1)
    {
      b = b / g;
      g = __gcd(a, b);
    }

    if (b > 1)
      cout << "No\n";
    else
      cout << "Yes\n";
  }

  return 0;
}