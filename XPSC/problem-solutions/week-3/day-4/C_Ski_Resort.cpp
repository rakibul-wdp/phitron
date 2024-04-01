#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, k, q;
    cin >> n >> k >> q;
    int arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    long long ans = 0;
    long long count = 0;

    for (int i = 0; i < n; i++)
    {
      if (arr[i] > q)
      {
        if (count >= k)
          ans += ((count - k + 1) * (count - k + 2)) / 2;
        count = 0;
      }
      else
        count++;
    }

    if (count >= k)
      ans += ((count - k + 1) * (count - k + 2)) / 2;

    cout << ans << "\n";
  }

  return 0;
}