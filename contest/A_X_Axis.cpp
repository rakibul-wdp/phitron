#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int x, y, z;
    cin >> x >> y >> z;

    int min = x;
    int max = x;

    if (y < min)
      min = y;
    if (y > max)
      max = y;

    if (z < min)
      min = z;
    if (z > max)
      max = z;

    cout << max - min << "\n";
  }

  return 0;
}