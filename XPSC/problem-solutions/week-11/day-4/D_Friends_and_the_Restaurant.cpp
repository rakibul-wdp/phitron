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

    vector<int> a(n, 0);

    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      a[i] -= x;
    }

    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      a[i] += x;
    }

    sort(a.begin(), a.end(), greater<int>());

    int ans = 0;
    int l = 0, r = n - 1;

    while (l < r)
    {
      if (a[l] > -1 && a[r] > -1)
      {
        ans++;
        l++, r--;
      }
      else if (a[l] < 0 && a[r] < 0)
        break;
      else if (a[l] > -1)
      {
        if (a[l] >= abs(a[r]))
        {
          ans++;
          l++, r--;
        }
        else
          r--;
      }
    }

    cout << ans << "\n";
  }

  return 0;
}