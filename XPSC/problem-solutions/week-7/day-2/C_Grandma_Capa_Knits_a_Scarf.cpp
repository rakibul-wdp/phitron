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

    string s;
    cin >> s;

    int ans = INT_MAX;

    for (int i = 'a'; i <= 'z'; i++)
    {
      int change = 0;
      int l = 0, r = n - 1;

      while (l <= r)
      {
        if (s[l] != s[r])
        {
          if (s[l] == i)
          {
            l++;
            change++;
          }
          else if (s[r] == i)
          {
            r--;
            change++;
          }
          else
          {
            change = INT_MAX;
            break;
          }
        }
        else
        {
          l++;
          r--;
        }
      }

      ans = min(ans, change);
    }

    if (ans == INT_MAX)
      cout << -1 << "\n";
    else
      cout << ans << "\n";
  }

  return 0;
}