#include <bits/stdc++.h>
using namespace std;

vector<int> v[1005];

bool vis[1005];
int level[1005];
void bfs(int src)
{
  queue<int> q;
  q.push(src);
  vis[src] = true;
  level[src] = 0;
  while (!q.empty())
  {
    int par = q.front();
    q.pop();
    // cout << par << endl;
    for (int child : v[par])
    {
      if (!vis[child])
      {
        q.push(child);
        vis[child] = true;
        level[child] = level[par] + 1;
      }
    }
  }
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

  int src;
  cin >> src;
  memset(vis, false, sizeof(vis));
  memset(level, -1, sizeof(level));
  bfs(src);

  for (int i = 0; i < n; i++)
    cout << i << " " << level[i] << endl;

  return 0;
}

/*
10 10
0 1
1 2
0 4
1 3
2 0
3 4
1 5
3 6
7 8
8 9
8
*/