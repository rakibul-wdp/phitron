#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<pair<long long, long long>> v[N];
long long dis[N];

class cmp
{
public:
  bool operator()(pair<long long, long long> a, pair<long long, long long> b)
  {
    return a.second > b.second;
  }
};

void dijkstra(int src)
{
  priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, cmp> pq;
  pq.push({src, 0});
  dis[src] = 0;

  while (!pq.empty())
  {
    pair<long long, long long> parent = pq.top();
    pq.pop();
    long long node = parent.first;
    long long cost = parent.second;

    for (pair<long long, long long> child : v[node])
    {
      long long child_node = child.first;
      long long child_cost = child.second;

      if (cost + child_cost < dis[child_node])
      {
        dis[child_node] = cost + child_cost;
        pq.push({child_node, dis[child_node]});
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
    long long a, b, c;
    cin >> a >> b >> c;
    v[a].push_back({b, c});
  }

  for (int i = 1; i <= n; i++)
    dis[i] = 1e18;

  int s;
  cin >> s;
  dijkstra(s);

  int t;
  cin >> t;
  while (t--)
  {
    int d, dw;
    cin >> d >> dw;

    if (dw >= dis[d])
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}