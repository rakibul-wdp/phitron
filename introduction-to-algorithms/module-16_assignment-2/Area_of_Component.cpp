#include <bits/stdc++.h>
using namespace std;

char arr[1000][1000];
bool vis[1000][1000];
int dis[1000][1000];
int min_area = INT_MAX;

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

int n, m;

bool valid(int i, int j)
{
  if (i < 0 || i >= n || j < 0 || j >= m)
    return false;
  return true;
}

void bfs(int si, int sj)
{
  queue<pair<int, int>> q;
  q.push({si, sj});
  vis[si][sj] = true;
  dis[si][sj] = 0;

  int area = 0;
  while (!q.empty())
  {
    pair<int, int> par = q.front();
    int a = par.first, b = par.second;
    q.pop();
    area++;
    for (int i = 0; i < 4; i++)
    {
      int ci = a + d[i].first;
      int cj = b + d[i].second;
      if (valid(ci, cj) && !vis[ci][cj] && arr[ci][cj] == '.')
      {
        q.push({ci, cj});
        vis[ci][cj] = true;
        dis[ci][cj] = dis[a][b] + 1;
      }
    }
  }
  min_area = min(min_area, area);
}

int main()
{
  cin >> n >> m;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
      cin >> arr[i][j];
  }

  memset(vis, false, sizeof(vis));
  memset(dis, -1, sizeof(dis));
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (arr[i][j] == '.' && !vis[i][j])
        bfs(i, j);
    }
  }

  if (min_area == INT_MAX)
    cout << -1 << endl;
  else
    cout << min_area << endl;

  return 0;
}