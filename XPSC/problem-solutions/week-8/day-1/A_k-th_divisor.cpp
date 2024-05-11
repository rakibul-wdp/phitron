#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long n, k;
  cin >> n >> k;

  set<long long> s;

  for (int i = 1; i <= sqrt(n); i++)
    if (n % i == 0)
    {
      long long x = i;
      long long y = n / i;

      s.insert(x);
      s.insert(y);
    }

  vector<long long> v;
  v.assign(s.begin(), s.end());

  if (k > v.size())
    cout << -1 << "\n";
  else
    cout << v[k - 1] << "\n";

  return 0;
}