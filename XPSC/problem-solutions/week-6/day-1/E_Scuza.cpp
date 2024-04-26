#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long t;
  cin >> t;

  while (t--)
  {
    long long n, q;
    cin >> n >> q;

    vector<long long> v(n);
    for (int i = 0; i < n; i++)
      cin >> v[i];

    vector<pair<long long, long long>> query(q);
    vector<long long> ans(q);
    long long sum = 0;

    for (int i = 0; i < q; i++)
    {
      cin >> query[i].first;
      query[i].second = i;
    }

    sort(query.begin(), query.end());
    long long pos = 0;

    for (int i = 0; i < q; i++)
    {
      while (pos < n && v[pos] <= query[i].first)
      {
        sum += v[pos];
        pos++;
      }
      ans[query[i].second] = sum;
    }

    for (auto x : ans)
      cout << x << " ";
    cout << "\n";
  }

  return 0;
}