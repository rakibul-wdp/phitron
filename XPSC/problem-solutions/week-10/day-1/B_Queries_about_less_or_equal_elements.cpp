#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m, a[200010], b[200010];
  cin >> n >> m;

  for (int i = 1; i <= n; i++)
    cin >> a[i];

  sort(a + 1, a + 1 + n);

  for (int i = 1; i <= m; i++)
    cin >> b[i];

  for (int i = 1; i <= m; i++)
  {
    int pos = upper_bound(a + 1, a + 1 + n, b[i]) - a - 1;
    cout << pos << ' ';
  }

  return 0;
}