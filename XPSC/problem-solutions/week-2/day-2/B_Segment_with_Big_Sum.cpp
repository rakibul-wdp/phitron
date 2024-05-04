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
  int l = 0, r = 0, ans = -1;

  while (r < n)
  {
    sum += arr[r];
    while (sum >= s)
    {
      if (ans == -1)
        ans = r - l + 1;
      else
        ans = min(ans, r - l + 1);

      sum -= arr[l];
      l++;
    }

    r++;
  }

  cout << ans << "\n";

  return 0;
}