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

    int a = 1, count = 0;

    while (a * 2 <= n)
    {
      a = a * 2;
      count++;
    }

    int ans = 1;
    bool flag = false;

    for (int i = count - 1; i >= 0; i--)
    {
      if ((n & (1 << i)))
        flag = true;
      else
      {
        if (flag)
          ans = ans * 2;
      }
    }

    cout << ans << "\n";
  }

  return 0;
}