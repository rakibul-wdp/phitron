#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  long long s;
  cin >> n >> s;

  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  long long sum = 0;
  int l = 0, r = 0, ans = 0;

  while (r < n)
  {
    sum += arr[r];
    if (sum <= s)
      ans = max(ans, r - l + 1);
    else
    {
      sum -= arr[l];
      l++;
    }
    r++;
  }

  cout << ans << "\n";

  return 0;
}