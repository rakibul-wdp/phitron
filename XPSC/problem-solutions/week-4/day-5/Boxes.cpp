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
    long long a[n], g1, g2;
    for (int i = 0; i < n; i++)
      cin >> a[i];

    g1 = *max_element(a, a + n);
    int c = 0, c2 = 0;

    while (g1 > 0)
    {
      g1 /= 2;
      c++;
    }

    g2 = pow(2, c - 1);

    for (int i = 0; i < n; i++)
    {
      if (a[i] >= g2)
        c2++;
    }

    if (c2 % 2 == 1)
      cout << (c2 / 2) + 1 << "\n";
    else
      cout << c2 / 2 << "\n";
  }

  return 0;
}