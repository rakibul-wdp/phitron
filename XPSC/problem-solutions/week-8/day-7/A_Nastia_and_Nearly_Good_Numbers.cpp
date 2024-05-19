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

    if (b == 1)
      cout << "NO\n";
    else
    {
      cout << "YES\n";
      long long sum = (a * b * 2);
      long long y = sum - a;

      cout << a << " " << y << " " << sum << "\n";
    }
  }

  return 0;
}