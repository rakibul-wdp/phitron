#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, x;
    cin >> n >> x;

    if ((n * x) < 10000 || (n * x) > 99999)
      cout << "NO"
           << "\n";
    else
      cout << "YES"
           << "\n";
  }

  return 0;
}