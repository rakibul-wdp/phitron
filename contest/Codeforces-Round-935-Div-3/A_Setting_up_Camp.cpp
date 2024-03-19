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

    long long f = b % 3;

    if (f + c >= 3 || f == 0)
      cout << a + (b + c) / 3 << endl;
    else
      cout << -1 << endl;
  }

  return 0;
}