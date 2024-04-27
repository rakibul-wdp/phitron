#include <bits/stdc++.h>
using namespace std;

int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

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

    sort(arr, arr + n);

    int l = 0, h = 1e15;

    while (l <= h)
    {
      int mid = (l + h) / 2;

      int cnt = 0, cur = 0, st = arr[0];

      for (int i = 0; i < n; i++)
      {
        if (ceil_div(arr[i] - st, 2) > mid)
        {
          st = arr[i];
          cnt++;
        }
      }

      if (cnt < 3)
        h = mid - 1;
      else
        l = mid + 1;
    }

    cout << l << endl;
  }

  return 0;
}