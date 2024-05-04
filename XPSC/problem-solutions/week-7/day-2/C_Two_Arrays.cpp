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

    int a[n], b[n];

    for (int i = 0; i < n; i++)
      cin >> a[i];
    for (int i = 0; i < n; i++)
      cin >> b[i];

    sort(a, a + n);
    sort(b, b + n);

    bool ans = true;

    for (int i = 0; i < n; i++)
    {
      if (a[i] == b[i] - 1 || a[i] == b[i])
        continue;
      else
      {
        ans = false;
        break;
      }
    }

    if (ans)
      cout << "YES\n";
    else
      cout << "NO\n";
  }

  return 0;
}