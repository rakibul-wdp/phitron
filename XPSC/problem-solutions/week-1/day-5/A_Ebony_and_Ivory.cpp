#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;

  bool possible = false;

  for (int i = 0; i <= c; i += a)
    for (int j = 0; j <= c; j += b)
      if (i + j == c)
      {
        possible = true;
        break;
      }

  if (possible)
    cout << "YES\n";
  else
    cout << "NO\n";

  return 0;
}