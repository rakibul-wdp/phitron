#include <bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
using namespace std;

const ll N = 1e5 + 5;
vector<pi> v[N];
ll dis[N];
ll par[N];

class cmp
{
public:
  bool operator()(pi a, pi b) { return a.second > b.second; }
};

void dijkstra(ll s)
{
  priority_queue<pi, vector<pi>, cmp> pq;
  pq.push({s, 0});
  dis[s] = 0;
  while (!pq.empty())
  {
    pi parent = pq.top();
    pq.pop();
    ll parent_node = parent.first;
    ll parent_cost = parent.second;
    for (pi child : v[parent_node])
    {
      ll child_node = child.first;
      ll child_cost = child.second;
      if (parent_cost + child_cost < dis[child_node])
      {
        dis[child_node] = parent_cost + child_cost;
        pq.push({child_node, dis[child_node]});
        par[child_node] = parent_node;
      }
    }
  }
}

int main()
{
  ll n, e;
  cin >> n >> e;
  while (e--)
  {
    ll a, b, c;
    cin >> a >> b >> c;
    v[a].push_back({b, c});
    v[b].push_back({a, c});
  }

  for (ll i = 1; i <= n; i++)
  {
    dis[i] = 1e18;
    par[i] = -1;
  }

  dijkstra(1);

  if (dis[n] == 1e18)
    cout << -1 << endl;
  else
  {
    ll x = n;
    vector<ll> path;
    while (x != -1)
    {
      path.push_back(x);
      x = par[x];
    }

    reverse(path.begin(), path.end());

    for (ll val : path)
      cout << val << " ";
    cout << endl;
  }

  return 0;
}