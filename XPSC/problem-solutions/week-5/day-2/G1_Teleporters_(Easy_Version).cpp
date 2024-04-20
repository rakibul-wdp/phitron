#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, c;
    cin >> n >> c;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      arr[i] += (i + 1);
    }

    sort(arr, arr + n);

    int ans = 0, sum = 0;

    for (int i = 0; i < n; i++)
    {
      if (sum + arr[i] > c)
        break;
      sum += arr[i];
      ans++;
    }

    cout << ans << "\n";
  }

  return 0;
}