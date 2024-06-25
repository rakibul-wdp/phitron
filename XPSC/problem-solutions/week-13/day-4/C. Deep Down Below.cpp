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

    vector<pair<int, int>> q;

    for (int i = 0; i < n; i++)
    {
      vector<int> a;
      int m, k = 0;
      cin >> m;

      for (int j = 0; j < m; j++)
      {
        int x;
        cin >> x;

        a.push_back(x);
        k = max(k, x - j);
      }

      q.push_back({k, m});
    }

    sort(q.begin(), q.end());
    int maxx = 0, sum = 0;

    for (int i = 0; i < q.size(); i++)
    {
      maxx = max(maxx, q[i].first - sum);
      sum += q[i].second;
    }

    cout << maxx + 1 << "\n";
  }

  return 0;
}