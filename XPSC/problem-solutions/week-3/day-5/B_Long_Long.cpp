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

    long long sum = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      sum += abs(arr[i]);
    }

    int ans = 0, count = 0;

    for (int i = 0; i < n; i++)
    {
      if (arr[i] == 0 && count == 0)
        continue;
      if (arr[i] <= 0)
        count++;
      else
      {
        if (count > 0)
          ans++;

        count = 0;
      }
    }

    if (count)
      ans++;

    cout << sum << " " << ans << "\n";
  }

  return 0;
}