#include <bits/stdc++.h>
using namespace std;

int main()
{
  int testCases;
  cin >> testCases;

  while (testCases--)
  {
    int a, b;
    cin >> a >> b;

    int c = ((a % 10) * 10) + (a / 10);
    int d = ((b % 10) * 10) + (b / 10);

    if (a > b || c > b || c > d || a > d)
      cout << "Yes"
           << "\n";
    else
      cout << "No"
           << "\n";
  }

  return 0;
}