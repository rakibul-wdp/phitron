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

    bool flag = true;

    for (int i = 1; i <= n; i++)
    {
      int x;
      cin >> x;

      bool found = false;

      for (int j = i + 1; j >= 2; j--)
      {
        if (x % j != 0)
        {
          found = true;
          break;
        }
      }

      flag &= found;
    }

    if (flag)
      cout << "YES\n";
    else
      cout << "NO\n";
  }

  return 0;
}