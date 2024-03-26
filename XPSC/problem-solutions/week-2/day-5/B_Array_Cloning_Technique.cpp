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

    int maxFreq = 0;

    for (auto i : freq)
      maxFreq = max(maxFreq, i.second);

    int ans = 0;

    while (maxFreq < n)
    {
      int remaining = n - maxFreq;
      int canAdd = maxFreq;

      ans++;
      ans += min(canAdd, remaining);
      maxFreq += min(canAdd, remaining);
    }

    cout << ans << "\n";
  }

  return 0;
}