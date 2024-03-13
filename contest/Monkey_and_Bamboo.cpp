#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */

  long long t;
  cin >> t;
  while (t--)
  {
    long long h, a, b;
    cin >> h >> a >> b;
    if (h <= a)
      cout << 1 << endl;
    else if (a > b)
    {
      long long ans = ceil((h - a) * 1.0 / (a - b) * 1.0);
      cout << ans * 2 + 1 << endl;
    }
    else
      cout << "Impossible" << endl;
  }

  return 0;
}
