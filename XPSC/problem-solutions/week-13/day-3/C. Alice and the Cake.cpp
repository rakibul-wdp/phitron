#include <bits/stdc++.h>
using namespace std;

map<long long, long long> p;

int fun(long long s)
{
  if (!s)
    return 0;

  if (p[s])
  {
    p[s]--;
    return 1;
  }

  return fun(s / 2) && fun(s - s / 2);
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    p.clear();

    int n;
    cin >> n;

    long long x;
    long long sum = 0;

    for (int i = 1; i <= n; i++)
    {
      cin >> x;
      p[x]++;
      sum += x;
    }

    if (fun(sum))
      cout << "YES\n";
    else
      cout << "NO\n";
  }

  return 0;
}