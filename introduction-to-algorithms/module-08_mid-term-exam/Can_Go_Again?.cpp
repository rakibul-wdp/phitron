#include <bits/stdc++.h>
#define ll long long int
using namespace std;

class Edge
{
public:
  ll u, v, c;
  Edge(ll u, ll v, ll c)
  {
    this->u = u;
    this->v = v;
    this->c = c;
  }
};

const int N = 1e5 + 5;
ll dis[N];

int main()
{
  int n, e;
  cin >> n >> e;
  vector<Edge> edge_list;
  while (e--)
  {
    ll u, v, c;
    cin >> u >> v >> c;
    edge_list.push_back(Edge(u, v, c));
  }

  for (int i = 1; i <= n; i++)
    dis[i] = 1e18;

  int s;
  cin >> s;
  dis[s] = 0;

  for (int i = 1; i <= n - 1; i++)
  {
    for (Edge ed : edge_list)
    {
      ll u, v, c;
      u = ed.u;
      v = ed.v;
      c = ed.c;
      if (dis[u] < 1e18 && dis[u] + c < dis[v])
        dis[v] = dis[u] + c;
    }
  }

  bool cycle = false;
  for (Edge ed : edge_list)
  {
    ll u, v, c;
    u = ed.u;
    v = ed.v;
    c = ed.c;
    if (dis[u] < 1e18 && dis[u] + c < dis[v])
    {
      cycle = true;
      break;
    }
  }

  int t;
  cin >> t;
  while (t--)
  {
    int d;
    cin >> d;

    if (!cycle)
    {
      if (dis[d] == 1e18)
        cout << "Not Possible" << endl;
      else
        cout << dis[d] << endl;
    }
  }

  if (cycle)
    cout << "Negative Cycle Detected" << endl;

  return 0;
}