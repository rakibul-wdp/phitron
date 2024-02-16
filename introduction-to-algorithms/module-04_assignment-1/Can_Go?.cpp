#include <bits/stdc++.h>
using namespace std;

char arr[1000][1000];
bool vis[1000][1000];
int dis[1000][1000];

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

  while (!q.empty())
  {
    pair<int, int> par = q.front();
    int a = par.first, b = par.second;
    q.pop();
    for (int i = 0; i < 4; i++)
    {
      int ci = a + d[i].first;
      int cj = b + d[i].second;
      if (valid(ci, cj) && !vis[ci][cj] && (arr[ci][cj] == '.' || arr[ci][cj] == 'A' || arr[ci][cj] == 'B'))
      {
        q.push({ci, cj});
        vis[ci][cj] = true;
        dis[ci][cj] = dis[a][b] + 1;
      }
    }
  }
}

int main()
{
  cin >> n >> m;
  int si, sj, ei, ej;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> arr[i][j];
      if (arr[i][j] == 'A')
      {
        si = i;
        sj = j;
      }
      else if (arr[i][j] == 'B')
      {
        ei = i;
        ej = j;
      }
    }
  }

  memset(vis, false, sizeof(vis));
  memset(dis, -1, sizeof(dis));
  bfs(si, sj);

  if (dis[ei][ej] != -1)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}

/*
// #include <bits/stdc++.h>
// using namespace std;

// char arr[1000][1000];
// bool vis[1000][1000];
// int dis[1000][1000];

// vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

// int n, m;

// bool valid(int i, int j)
// {
//   if (i < 0 || i >= n || j < 0 || j >= m)
//     return false;
//   return true;
// }

// void bfs(int si, int sj)
// {
//   queue<pair<int, int>> q;
//   q.push({si, sj});
//   vis[si][sj] = true;
//   dis[si][sj] = 0;

//   while (!q.empty())
//   {
//     pair<int, int> par = q.front();
//     int a = par.first, b = par.second;
//     q.pop();
//     for (int i = 0; i < 4; i++)
//     {
//       int ci = a + d[i].first;
//       int cj = b + d[i].second;
//       if (valid(ci, cj) && !vis[ci][cj] && (arr[ci][cj] == '.' || arr[ci][cj] == 'R' || arr[ci][cj] == 'D'))
//       {
//         q.push({ci, cj});
//         vis[ci][cj] = true;
//         dis[ci][cj] = dis[a][b] + 1;
//       }
//     }
//   }
// }

// int main()
// {
//   cin >> n >> m;
//   int si, sj, ei, ej;

//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < m; j++)
//     {
//       cin >> arr[i][j];
//       if (arr[i][j] == 'R')
//       {
//         si = i;
//         sj = j;
//       }
//       else if (arr[i][j] == 'D')
//       {
//         ei = i;
//         ej = j;
//       }
//     }
//   }

//   memset(vis, false, sizeof(vis));
//   memset(dis, -1, sizeof(dis));
//   bfs(si, sj);

//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < m; j++)
//     {
//       cout << arr[i][j];
//     }
//     cout << endl;
//   }

//   return 0;
// }
*/