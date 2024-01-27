#include <bits/stdc++.h>
using namespace std;

char arr[1000][1000];
bool vis[1000][1000];

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

int n, m;

bool valid(int i, int j)
{
  if (i < 0 || i >= n || j < 0 || j >= m)
    return false;
  return true;
}

void dfs(int si, int sj)
{
  vis[si][sj] = true;
  for (int i = 0; i < 4; i++)
  {
    int ci = si + d[i].first;
    int cj = sj + d[i].second;
    if (valid(ci, cj) == true && vis[ci][cj] == false && arr[ci][cj] == '.')
      dfs(ci, cj);
  }
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

  int count = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (!vis[i][j] && arr[i][j] == '.')
      {
        dfs(i, j);
        count++;
      }
    }
  }

  cout << count << endl;

  return 0;
}