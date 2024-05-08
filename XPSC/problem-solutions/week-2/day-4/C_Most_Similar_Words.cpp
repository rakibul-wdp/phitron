#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, m;
    cin >> n >> m;

    string arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
      string s1 = arr[i];

      for (int j = i + 1; j < n; j++)
      {
        string s2 = arr[j];
        int loc = 0;

        for (int k = 0; k < m; k++)
          loc += abs(s2[k] - s1[k]);

        ans = min(loc, ans);
      }
    }

    cout << ans << "\n";
  }

  return 0;
}