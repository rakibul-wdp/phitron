#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;

    s += s;
    n += n;

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
      int count = 0;
      if (s[i] == c)
      {
        while (i < n && s[i] != 'g')
        {
          count++;
          i++;
        }
        if (s[i] == 'g')
          ans = max(ans, count);
      }
    }

    if (c == 'g')
      cout << 0 << "\n";
    else
      cout << ans << "\n";
  }

  return 0;
}