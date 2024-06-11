#include <bits/stdc++.h>
using namespace std;

int main()
{
  int testCases;
  cin >> testCases;

  while (testCases--)
  {
    string a, b;
    cin >> a >> b;

    cout << b[0] << a[1] << a[2] << " " << a[0] << b[1] << b[2] << "\n";
  }

  return 0;
}