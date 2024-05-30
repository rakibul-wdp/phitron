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

    bool valid = 0;

    int l, r;
    for (int i = 1; i < n; i++)
      if (abs(arr[i] - arr[i - 1]) >= 2)
      {
        valid = 1;
        l = i;
        r = i + 1;
        break;
      }

    if (!valid)
      cout << "NO\n";
    else
    {
      cout << "YES\n";
      cout << l << " " << r << "\n";
    }
  }

  return 0;
}