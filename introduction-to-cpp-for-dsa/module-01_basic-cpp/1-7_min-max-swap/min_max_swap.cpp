#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;

  int res = min({a, b, c, d, e});
  int res2 = max({a, b, c, d, e});

  cout << res << " " << res2 << endl;

  return 0;
}