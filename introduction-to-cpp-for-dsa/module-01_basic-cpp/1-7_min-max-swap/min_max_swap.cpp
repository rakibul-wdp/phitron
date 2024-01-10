#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  int res = min(a, b);
  int res2 = max(a, b);

  cout << res << res2 << endl;

  return 0;
}