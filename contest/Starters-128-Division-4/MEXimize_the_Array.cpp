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
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
      cin >> arr[i];

    sort(arr + 1, arr + 1 + n);

    long long res = 0;
    for (int i = 1; i <= n; i++)
      res += abs((i - 1) - arr[i]);

    cout << res << "\n";
  }

  return 0;
}