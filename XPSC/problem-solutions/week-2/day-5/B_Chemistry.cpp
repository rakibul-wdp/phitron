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

    string s;
    cin >> s;

    map<char, int> mp;

    for (char ch : s)
      mp[ch]++;

    int ans = 0, p = 0;

    for (auto it : mp)
      if (it.second % 2 == 1)
        p++;

    if (p - 1 <= k)
      cout << "YES"
           << "\n";
    else
      cout << "NO"
           << "\n";
  }

  return 0;
}