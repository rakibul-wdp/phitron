#include <bits/stdc++.h>
using namespace std;

int main()
{
  const int MAXN = 1e5 + 5;

  int cnt[MAXN] = {0};
  int num = 0;

  int n, k;
  cin >> n >> k;

  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  long long ans = 0;
  int l = 0, r = 0;

  while (r < n)
  {
    cnt[a[r]]++;
    if (cnt[a[r]] == 1)
      num++;

    while (num > k)
    {
      cnt[a[l]]--;
      if (cnt[a[l]] == 0)
        num--;
      l++;
    }

    ans += r - l + 1;
    r++;
  }

  cout << ans << endl;

  return 0;
}
