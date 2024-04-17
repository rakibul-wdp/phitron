#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int a, b;
    cin >> a >> b;

    int xorwise = a ^ b;

    cout << xorwise << "\n";
  }

  return 0;
}