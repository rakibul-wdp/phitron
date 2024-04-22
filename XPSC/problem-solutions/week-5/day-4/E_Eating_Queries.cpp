#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, q;
    cin >> n >> q;

    int arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    sort(arr, arr + n, greater<int>());

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
      sum += arr[i];
      arr[i] = sum;
    }

    while (q--)
    {
      int req_sum;
      cin >> req_sum;

      int ans = -1;
      int first = 0, second = n - 1;
      while (second >= first)
      {
        int mid = first + (second - first) / 2;
        if (arr[mid] >= req_sum)
        {
          ans = mid + 1;
          second = mid - 1;
        }
        else
          first = mid + 1;
      }

      cout << ans << endl;
    }
  }

  return 0;
}