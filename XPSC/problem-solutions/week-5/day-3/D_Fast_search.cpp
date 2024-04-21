#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  sort(arr, arr + n);

  int k;
  cin >> k;

  while (k--)
  {
    int l, r;
    cin >> l >> r;

    int low = -1, up = n;

    while (low + 1 < up)
    {
      int mid = (low + up) / 2;
      if (arr[mid] < l)
        low = mid;
      else
        up = mid;
    }

    int low2 = -1, up2 = n;
    while (low2 + 1 < up2)
    {
      int mid = (low2 + up2) / 2;
      if (arr[mid] <= l)
        low2 = mid;
      else
        up2 = mid;
    }

    if (low2 == -1 && up == n)
      cout << 0 << "\n";
    else
      cout << low2 - up + 1 << "\n";
  }

  return 0;
}