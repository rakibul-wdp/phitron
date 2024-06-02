#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long n;
  cin >> n;

  long long a, b, ans = 0, maxo = 0;
  map<long long, long long> m;

  for (int i = 0; i < n; i++)
  {
    cin >> a >> b;
    m[a]++;
    m[b]--;
  }

  for (auto x : m)
  {
    ans += x.second;
    maxo = max(maxo, ans);
  }

  cout << maxo << "\n";

  return 0;
}