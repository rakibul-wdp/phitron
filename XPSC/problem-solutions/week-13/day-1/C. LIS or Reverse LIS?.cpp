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

    int x;
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
      cin >> x;
      mp[x]++;
    }

    int count1 = 0;
    int count2 = 0;

    for (auto it : mp)
    {
      if (it.second > 1)
      {
        count1++;
        count2++;
      }
      else
      {
        if (count1 > count2)
          count2++;
        else
          count1++;
      }
    }

    count2++;
    cout << min(count1, count2) << "\n";
  }

  return 0;
}