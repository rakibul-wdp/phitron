#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  long long k;
  cin >> n >> k;

  vector<long long> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  long long l = 0, r = 0, ans = 0;
  multiset<long long> ml;

  while (r < n)
  {
    ml.insert(arr[r]);
    long long mn, mx;
    mn = *ml.begin(), mx = *ml.rbegin();
    if ((mx - mn) <= k)
      ans += (r - l + 1);
    else
    {
      while (l < r)
      {
        mn = *ml.begin(), mx = *ml.rbegin();
        if ((mx - mn) <= k)
          break;
        auto it = ml.find(arr[l]);
        ml.erase(it);
        l++;
      }
      mn = *ml.begin(), mx = *ml.rbegin();
      if ((mx - mn) <= k)
        ans += (r - l + 1);
    }
    r++;
  }

  cout << ans << "\n";

  return 0;
}