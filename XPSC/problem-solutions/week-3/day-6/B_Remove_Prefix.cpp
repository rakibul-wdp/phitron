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

    map<int, int> mp;
    int s = 0;

    for (int i = n - 1; i >= 0; i--)
    {
      if (mp[arr[i]] == 0)
        s++;
      else
        break;

      mp[arr[i]]++;
    }

    cout << n - s << "\n";
  }

  return 0;
}