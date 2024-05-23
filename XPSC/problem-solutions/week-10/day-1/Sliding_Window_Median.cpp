#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long n, k;
  cin >> n >> k;

  priority_queue<pair<long long, long long>> l;
  priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> r;

  long long a[n + 1];
  for (int i = 0; i < n; i++)
    cin >> a[i];

  long long m = (k + 1) / 2, b = 0;

  for (int i = 0; i < n; i++)
  {
    while (!r.empty() && r.top().second <= i - k)
      r.pop();
    while (!l.empty() && l.top().second <= i - k)
      l.pop();
    if (b < m)
    {
      r.push({a[i], i});
      l.push(r.top());
      r.pop();
      b++;
    }
    else
    {
      l.push({a[i], i});
      r.push(l.top());
      l.pop();
    }

    while (!r.empty() && r.top().second <= i - k)
      r.pop();
    while (!l.empty() && l.top().second <= i - k)
      l.pop();
    if (i < k - 1)
      continue;
    cout << l.top().first << " ";
    if (a[i - k + 1] <= l.top().first)
      b--;
  }

  return 0;
}