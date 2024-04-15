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

    int a = 1, b = 0, count = 0;

    while (a * 2 <= n)
    {
      a = a * 2;
      count++;
    }

    for (int i = count - 1; i >= 0; i--)
    {
      if ((n & 1 << i))
        b = b | (1 << i);
    }

    cout << b << " " << a << "\n";
  }

  return 0;
}