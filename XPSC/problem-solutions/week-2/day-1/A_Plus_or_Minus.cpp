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

    if ((a + b) == c)
      cout << "+"
           << "\n";
    else
      cout << "-"
           << "\n";
  }

  return 0;
}