#include <bits/stdc++.h>
using namespace std;

int main()
{
  int testCases;
  cin >> testCases;

  while (testCases--)
  {
    int n;
    cin >> n;
    int arr[n];
    int x = 0;

    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      x ^= arr[i];
    }

    int ans = x;

    for (int i = 0; i < n; i++)
      ans = min(ans, x ^ arr[i]);

    cout << ans << "\n";
  }
}