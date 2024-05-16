#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int a, b;
  cin >> a >> b;

  int i = b;

  while (i > a)
  {
    if (i % 2 == 0)
      break;
    i--;
  }

  if (i == 2)
    cout << -1 << "\n";
  else
  {
    for (int j = 2; j * j <= i; j++)
    {
      if (i % j == 0)
      {
        cout << j << " " << i - j << "\n";
        return;
      }
    }

    cout << -1 << "\n";
  }
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    solve();
  }

  return 0;
}