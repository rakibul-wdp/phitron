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

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];
    for (int i = 0; i < n; i++)
      cin >> b[i];

    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
      if (a[i] != b[i])
      {
        if (a[i] > b[i])
          x += a[i];
        else
          y += b[i];
      }
    }

    for (int i = 0; i < n; i++)
    {
      if (a[i] == 1 && b[i] == 1)
      {
        if (x > y)
          y++;
        else
          x++;
      }
    }

    for (int i = 0; i < n; i++)
    {
      if (a[i] == -1 && b[i] == -1)
      {
        if (x > y)
          x--;
        else
          y--;
      }
    }

    cout << min(x, y) << '\n';
  }

  return 0;
}