#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;

  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  for (int i = 0; i < k; i++)
  {
    int x;
    cin >> x;

    int l = 0, r = n - 1, mid;
    bool flag = false;

    while (l <= r)
    {
      mid = l + (r - l) / 2;

      if (arr[mid] == x)
      {
        flag = true;
        break;
      }
      else if (arr[mid] < x)
        l = mid + 1;
      else
        r = mid - 1;
    }
    if (flag)
      cout << "YES"
           << "\n";
    else
      cout << "NO"
           << "\n";
  }

  return 0;
}