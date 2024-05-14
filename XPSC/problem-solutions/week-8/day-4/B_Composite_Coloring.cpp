#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  int a[1005];
  int prime[12] = {0, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
  int chose[1005] = {0};

  while (t--)
  {
    int n;
    cin >> n;

    memset(chose, 0, sizeof(chose));
    map<int, int> mp;

    for (int i = 1; i <= n; i++)
    {
      cin >> a[i];

      for (int j = 1; j <= 11; j++)
      {
        if (a[i] % prime[j] == 0)
        {
          a[i] = prime[j];
          chose[prime[j]] = 1;
        }
      }
    }

    int cnt = 1;

    for (int i = 1; i <= 11; i++)
    {
      if (chose[prime[i]])
      {
        mp[prime[i]] = cnt;
        cnt++;
      }
    }

    cout << mp.size() << "\n";
    for (int i = 1; i <= n; i++)
      cout << mp[a[i]] << ' ';
    cout << "\n";
  }

  return 0;
}