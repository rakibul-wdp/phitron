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

    int arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    int x = 0, ans = 0;

    for (int i = 0; i < n; i++)
      if (arr[i] > i + 1)
      {
        x = abs((i + 1) - arr[i]);
        ans = max(x, ans);
      }

    cout << ans << "\n";
  }

  return 0;
}