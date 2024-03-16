#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  int ans = 0;
  if (a == b)
    ans = a + b;
  else
    ans = 2 * max(a, b) - 1;

  cout << ans << endl;

  return 0;
}