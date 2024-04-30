#include <bits/stdc++.h>
using namespace std;

int main()
{
  string txt, pat;
  cin >> txt >> pat;

  map<char, int> mp;

  int ans = 0;
  for (char pat_ch : pat)
    mp[pat_ch]++;

  int count = mp.size();

  int n = txt.size(), k = pat.size(), r = 0, l = 0;

  while (r < n)
  {
    if (mp.find(txt[r]) != mp.end())
    {
      mp[txt[r]]--;
      if (mp[txt[r]] == 0)
        count--;
    }

    if (r - l + 1 == k)
    {
      if (count == 0)
        ans++;
      if (mp.find(txt[l]) != mp.end())
      {
        if (mp[txt[l]] == 0)
          count++;
        mp[txt[l]]++;
      }
      l++;
    }
    r++;
  }

  cout << ans << "\n";

  return 0;
}