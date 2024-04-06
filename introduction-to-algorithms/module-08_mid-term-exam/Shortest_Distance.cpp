#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
  ll n, e;
  cin >> n >> e;
  ll adj[n + 1][n + 1];

  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j <= n; j++)
    {
      adj[i][j] = 1e18;
      if (i == j)
        adj[i][j] = 0;
    }
  }

  while (e--)
  {
    ll a, b, c;
    cin >> a >> b >> c;
    adj[a][b] = min(adj[a][b], c);
  }

  for (int k = 0; k <= n; k++)
  {
    for (int i = 0; i <= n; i++)
    {
      for (int j = 0; j <= n; j++)
      {
        if (adj[i][k] + adj[k][j] < adj[i][j])
          adj[i][j] = adj[i][k] + adj[k][j];
      }
    }
  }

  int q;
  cin >> q;
  while (q--)
  {
    int x, y;
    cin >> x >> y;

    if (adj[x][y] == 1e18)
      cout << "-1" << endl;
    else
      cout << adj[x][y] << endl;
  }

  return 0;
}

/*
4 6
3 2 8
2 1 5
1 0 2
3 0 20
0 1 3
1 2 2
*/