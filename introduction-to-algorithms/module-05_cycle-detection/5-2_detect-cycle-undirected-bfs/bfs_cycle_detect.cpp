#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
bool vis[N];
vector<int> adj[N];
int parent_array[N];

bool ans;
void bfs(int s)
{
  queue<int> q;
  q.push(s);
  vis[s] = true;
  while (!q.empty())
  {
    int parent = q.front();
    q.pop();
    for (int child : adj[parent])
    {
      if (vis[child] && parent_array[parent] != child)
        ans = true;
      if (!vis[child])
      {
        vis[child] = true;
        parent_array[child] = parent;
        q.push(child);
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
    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  memset(vis, false, sizeof(vis));
  memset(parent_array, -1, sizeof(parent_array));
  ans = false;

  for (int i = 0; i < n; i++)
  {
    if (!vis[i])
      bfs(i);
  }

  if (ans)
    cout << "cycle detected" << endl;
  else
    cout << "cycle not detected" << endl;

  return 0;
}

/*
7 6
0 1
1 2
3 4
4 5
5 6
6 3
*/