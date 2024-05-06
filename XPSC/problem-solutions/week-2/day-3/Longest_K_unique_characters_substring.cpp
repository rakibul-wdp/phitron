#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int longestKSubstr(string s, int k)
  {
    // your code here
    int i = 0, j = 0, n = s.size();
    unordered_map<char, int> mp;
    int maxLen = -1;

    while (j < n)
    {
      mp[s[j]]++;

      if (mp.size() > k)
      {
        while (mp.size() > k)
        {
          mp[s[i]]--;

          if (mp[s[i]] == 0)
            mp.erase(s[i]);
          i++;
        }
      }

      if (mp.size() == k)
        maxLen = max(maxLen, j - i + 1);

      j++;
    }
    return maxLen;
  }
};