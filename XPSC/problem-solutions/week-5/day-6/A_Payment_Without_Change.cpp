#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int a, b, n, s;
    cin >> a >> b >> n >> s;

    int c = s / n;
    c = min(c, a);

    if (s - n * c <= b)
      cout << "YES"
           << "\n";
    else
      cout << "NO"
           << "\n";
  }

  return 0;
}