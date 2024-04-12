#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
  int u, v, w;
  Edge(int u, int v, int w)
  {
    this->u = u;
    this->v = v;
    this->w = w;
  }
};

int main()
{
  int n, e;
  cin >> n >> e;
  vector<pair<int, int>> v[n];
  while (e--)
  {
    int a, b, c;
    cin >> a >> b >> c;
    v[a].push_back({b, c});
  }

  vector<Edge> edge_list;
  for (int i = 0; i < n; i++)
  {
    for (pair<int, int> child : v[i])
    {
      int child_node = child.first;
      int cost = child.second;
      edge_list.push_back(Edge(i, child_node, cost));
    }
  }

  for (Edge edge : edge_list)
    cout << edge.u << " " << edge.v << " " << edge.w << endl;

  return 0;
}

/*
4 5
0 1 10
1 2 11
2 3 12
3 2 12
3 1 13
*/