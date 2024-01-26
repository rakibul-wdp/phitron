#include <bits/stdc++.h>
using namespace std;

vector<int> v[1005];
vector<int> global_v;
bool vis[1005];
void bfs(int src, int lel)
{
  queue<pair<int, int>> q;
  q.push({src, 0});
  vis[src] = true;
  bool found = false;
  while (!q.empty())
  {
    pair<int, int> p = q.front();
    q.pop();
    int par = p.first;
    int level = p.second;
    // cout << par << endl;
    if (level == lel)
    {
      global_v.push_back(par);
      found = true;
    }
    for (int child : v[par])
    {
      if (!vis[child])
      {
        q.push({child, level + 1});
        vis[child] = true;
      }
    }
  }
  if (found == false)
    cout << -1 << endl;
}

int main()
{
  int n, e;
  cin >> n >> e;
  while (e--)
  {
    int a, b;
    cin >> a >> b;
    v[a].push_back(b);
    v[b].push_back(a);
  }

  int level;
  cin >> level;
  memset(vis, false, sizeof(vis));
  bfs(0, level);

  sort(global_v.begin(), global_v.end(), greater<int>());
  for (int value : global_v)
    cout << value << " ";

  return 0;
}