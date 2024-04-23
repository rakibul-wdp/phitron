#include <bits/stdc++.h>
using namespace std;

int main()
{
  int x, n, m;
  cin >> x >> n >> m;

  if (n > x + m)
    cout << "NO"
         << "\n";
  else
    cout << "YES"
         << "\n";

  return 0;
}