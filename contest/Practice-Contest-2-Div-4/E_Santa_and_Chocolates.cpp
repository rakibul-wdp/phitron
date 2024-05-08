#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    long long sum = 0;

    for (int i = 0; i < n; i++)
      cin >> arr[i];

    for (int i = 0; i < n; i++)
      sum += arr[i];

    if (sum < n)
      cout << "NO"
           << "\n";
    else if (sum % n == 0 || k != 0)
      cout << "YES"
           << "\n";
  }

  return 0;
}