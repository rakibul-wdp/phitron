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

void dfs(int si, int sj, int &room_count)
{
  vis[si][sj] = true;
  room_count++;

  for (int i = 0; i < 4; i++)
  {
    int ci = si + d[i].first;
    int cj = sj + d[i].second;
    if (valid(ci, cj) == true && vis[ci][cj] == false && arr[ci][cj] == '.')
      dfs(ci, cj, room_count);
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

  vector<int> apartment_counts;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (!vis[i][j] && arr[i][j] == '.')
      {
        int size = 0;
        dfs(i, j, size);
        apartment_counts.push_back(size);
      }
    }
  }

  sort(apartment_counts.begin(), apartment_counts.end());

  for (int value : apartment_counts)
    cout << value << " ";

  if (apartment_counts.empty())
    cout << 0;

  cout << endl;

  return 0;
}