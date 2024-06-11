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

    int an;
    map<int, int> m;

    for (int i = 1; i <= a; i++)
    {
      int x;
      cin >> x;

      if (i == 1)
        an = x;
      else
        an &= x;

      for (int j = 0; j < 31; j++)
      {
        if ((x & (1 << j)) == 0)
          m[j]++;
      }
    }

    for (int i = 30; i >= 0; i--)
    {
      if (m[i] && m[i] <= b)
      {
        b -= m[i];
        an |= 1 << i;
      }
    }

    cout << an << "\n";
  }

  return 0;
}