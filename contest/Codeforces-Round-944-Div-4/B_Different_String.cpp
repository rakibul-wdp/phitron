#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    bool flag1 = false, flag2 = false;
    int tmp = max(a, b);

    a = min(a, b);
    b = tmp;

    for (int i = a; i <= b; i++)
    {
      if (c == i)
        flag1 = true;
      else if (d == i)
        flag2 = true;
    }

    if ((flag1 && flag2) || (!flag1 && !flag2))
      cout << "NO\n";
    else
      cout << "YES\n";
  }

  return 0;
}