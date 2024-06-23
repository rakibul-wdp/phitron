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

    int ans = 15;

    for (int i = 0; i <= 15; i++)
      for (int j = 0; j <= 15 - i; j++)
        if (((n + i) * (int)pow(2, j)) % 32768 == 0)
          ans = min(i + j, ans);

    cout << ans << ' ';
  }

  return 0;
}