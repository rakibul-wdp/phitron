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

    vector<string> arr(n);
    map<string, bool> mp;

    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      mp[arr[i]] = true;
    }

    for (int i = 0; i < n; i++)
    {
      bool flag = false;

      for (int j = 1; j < arr[i].size(); j++)
      {
        string s1 = arr[i].substr(0, j);
        string s2 = arr[i].substr(j, arr[i].size() - 1);

        if (mp[s1] && mp[s2])
        {
          flag = true;
          break;
        }
      }

      if (flag)
        cout << 1;
      else
        cout << 0;
    }

    cout << "\n";
  }

  return 0;
}