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

    vector<int> a(n + 1);

    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      a[x]++;
    }

    int ans = -1;
    for (int i = 1; i <= n; i++)
    {
      if (a[i] >= 3)
      {
        ans = i;
        break;
      }
    }

    cout << ans << endl;
  }

  return 0;
}