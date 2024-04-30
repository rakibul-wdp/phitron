#include <bits/stdc++.h>
using namespace std;

int main()
{
  map<long long, long long> mp;
  for (long long i = 1; i < 10001; i++)
    mp[i * i * i]++;

  int t;
  cin >> t;

  while (t--)
  {
    long long x;
    cin >> x;

    int i, j = 0;

    for (long long i = 1; i < 10001; i++)
    {
      if (mp.find(x - i * i * i) != mp.end())
      {
        cout << "YES\n";
        j = 1;
        break;
      }
    }

    if (j == 0)
      cout << "NO\n";
  }
}