#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
  int u, v, c;
  Edge(int u, int v, int c)
  {
    this->u = u;
    this->v = v;
    this->c = c;
  }
};

const int N = 1e5 + 5;
int dis[N];

int main()
{
  int n, e;
  cin >> n >> e;
  vector<Edge> edge_list;
  while (e--)
  {
    int u, v, c;
    cin >> u >> v >> c;
    edge_list.push_back(Edge(u, v, c));
    edge_list.push_back(Edge(v, u, c)); // if undirected
  }

  for (int i = 0; i < n; i++)
    dis[i] = INT_MAX;

  dis[0] = 0;

  for (int i = 1; i <= n - 1; i++)
  {
    for (Edge ed : edge_list)
    {
      int u, v, c;
      u = ed.u;
      v = ed.v;
      c = ed.c;
      if (dis[u] < INT_MAX && dis[u] + c < dis[v])
        dis[v] = dis[u] + c;
    }
  }

  bool cycle = false;
  for (Edge ed : edge_list)
  {
    int u, v, c;
    u = ed.u;
    v = ed.v;
    c = ed.c;
    if (dis[u] < INT_MAX && dis[u] + c < dis[v])
    {
      cycle = true;
      break;
    }
  }

  if (cycle)
    cout << "cycle detected, no answer" << endl;
  else
    for (int i = 0; i < n; i++)
      cout << i << " -> " << dis[i] << endl;

  return 0;
}

/*
3 3
0 1 -1
1 2 2
2 0 -3

4 4
0 2 5
0 3 12
2 1 2
1 3 3
*/