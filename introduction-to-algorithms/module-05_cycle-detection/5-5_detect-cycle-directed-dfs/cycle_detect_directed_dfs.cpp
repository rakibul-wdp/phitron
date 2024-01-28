#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
bool vis[N];
bool path_visit[N];
vector<int> adj[N];

bool ans;
void dfs(int parent)
{
  vis[parent] = true;
  path_visit[parent] = true;
  for (int child : adj[parent])
  {
    if (path_visit[child])
      ans = true;
    if (!vis[child])
      dfs(child);
  }

  // work done
  path_visit[parent] = false;
}

int main()
{
  int n, e;
  cin >> n >> e;
  while (e--)
  {
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
  }

  memset(vis, false, sizeof(vis));
  memset(path_visit, false, sizeof(path_visit));
  ans = false;

  for (int i = 0; i < n; i++)
  {
    if (!vis[i])
      dfs(i);
  }

  if (ans)
    cout << "cycle detected" << endl;
  else
    cout << "cycle not detected" << endl;

  return 0;
}

/*
7 8
2 1
1 0
0 3
3 1
2 4
4 5
5 6
2 6
*/