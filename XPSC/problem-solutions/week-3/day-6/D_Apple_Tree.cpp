#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
vector<long long> leafs;

int dfs(int curr, int par)
{
  int ans = 0;
  for (auto it : g[curr])
    if (it != par)
      ans += dfs(it, curr);
  if (ans == 0)
    ans = 1;

  return leafs[curr] = ans;
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    g.clear();
    leafs.clear();
    g.resize(n + 1);
    leafs.resize(n + 1);

    for (int i = 0; i < n - 1; i++)
    {
      int u, v;
      cin >> u >> v;

      g[u].push_back(v);
      g[v].push_back(u);
    }

    dfs(1, -1);

    int q;
    cin >> q;
    while (q--)
    {
      int x, y;
      cin >> x >> y;

      cout << leafs[x] * leafs[y]
           << "\n";
    }
  }

  return 0;
}