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

    map<int, int> rec;
    for (int i = 1; i <= n; i++)
    {
      int x;
      cin >> x;

      rec[x]++;
    }

    int occur = 0, ans = 0;
    while (1)
    {
      if (rec[ans] == 0)
        break;
      if (rec[ans] == 1)
        occur++;
      if (occur == 2)
        break;
      ans++;
    }

    cout << ans << "\n";
  }

  return 0;
}