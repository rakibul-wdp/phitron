#include <bits/stdc++.h>
using namespace std;

int main()
{
  int x, y;
  while (cin >> x >> y)
  {
    double a = log(x) / log(y);
    double b = x * 1.0 / y;

    if (a > b)
      cout << ">\n";
    else if (a < b)
      cout << "<\n";
    else
      cout << "=\n";
  }

  return 0;
}