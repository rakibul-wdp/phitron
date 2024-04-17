#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    int t = 1;
    while (t <= n - 1)
      t *= 2;

    t /= 2;

    for (int i = n - 1; i >= t; i--)
      cout << i << " ";
    for (int i = 0; i < t; i++)
      cout << i << " ";

    cout << "\n";
  }

  return 0;
}