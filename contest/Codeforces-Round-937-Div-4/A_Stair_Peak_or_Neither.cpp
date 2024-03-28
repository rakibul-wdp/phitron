#include <bits/stdc++.h>
using namespace std;

int main()
{
  int testCases;
  cin >> testCases;

  while (testCases--)
  {
    int a, b, c;
    cin >> a >> b >> c;

    if (b > a && b < c)
      cout << "STAIR"
           << "\n";
    else if (b > a && b > c)
      cout << "PEAK"
           << "\n";
    else
      cout << "NONE"
           << "\n";
  }

  return 0;
}