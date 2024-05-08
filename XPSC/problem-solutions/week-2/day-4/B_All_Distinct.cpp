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

    map<int, int> freq;

    for (int i = 0; i < n; i++)
      freq[arr[i]]++;

    int willBeDeleted = 0;

    for (auto i : freq)
      willBeDeleted += (i.second - 1);

    int ans = n - willBeDeleted;

    if (willBeDeleted % 2 == 1)
      ans--;

    cout << ans << "\n";
  }

  return 0;
}