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
    int val = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      val ^= arr[i];
    }

    if (val == 0)
      cout << 0 << "\n";
    else
    {
      if (n % 2 == 0)
        cout << -1 << "\n";
      else
        cout << val << "\n";
    }
  }

  return 0;
}