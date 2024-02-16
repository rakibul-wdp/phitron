/*
Problem Statement

Rezia is trapped in a 2D maze of N * M size, starting at position R, and her goal is to reach the exit marked by D. The maze contains blocks represented by #, and she can only traverse through cells marked with dots (.). As she need to escape as early as possible, we need to determine the path she will follow.

Place an X in each cell representing Rezia's route to exit the maze. If there is no viable path for her to exit, leave the maze unchanged.

Note: Rezia can move in four directions – right, left, up, and down. It is crucial to adhere to the specified order: attempting right first, then left, followed by up, and finally down.

Input Format
First line will contain N and M.
Next you will be given the 2D matrix.

Constraints
1. 1 <= N, M <= 10^3

Output Format
Output the final maze with marked X indicating the path she will follow.

Sample Input 0
5 6
...D.#
.##..#
....#.
.R#...
.#.##.

Sample Output 0
...D.#
.##X.#
.XXX#.
.R#...
.#.##.

Sample Input 1
5 6
...D.#
.R...#
....#.
..#...
.#.##.

Sample Output 1
...D.#
.RXX.#
....#.
..#...
.#.##.

Sample Input 2
5 6
...D.#
.....#
.##.#.
.R#...
.#.##.

Sample Output 2
...D.#
XXXX.#
X##.#.
XR#...
.#.##.

Sample Input 3
5 6
...D.#
.....#
###.#.
.R#...
.#.##.

Sample Output 3
...D.#
.....#
###.#.
.R#...
.#.##.
*/

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
      if (valid(ci, cj) && !vis[ci][cj] && (arr[ci][cj] == '.' || arr[ci][cj] == 'R' || arr[ci][cj] == 'D'))
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
      if (arr[i][j] == 'R')
      {
        si = i;
        sj = j;
      }
      else if (arr[i][j] == 'D')
      {
        ei = i;
        ej = j;
      }
    }
  }

  memset(vis, false, sizeof(vis));
  memset(dis, -1, sizeof(dis));
  bfs(si, sj);

  int ci = ei, cj = ej;
  while (ci != si || cj != sj)
  {
    if (arr[ci][cj] == '.')
      arr[ci][cj] = 'X';
    bool found = false;
    for (int i = 0; i < 4; i++)
    {
      int pi = ci + d[i].first;
      int pj = cj + d[i].second;
      if (valid(pi, pj) && dis[pi][pj] == dis[ci][cj] - 1)
      {
        ci = pi;
        cj = pj;
        found = true;
        break;
      }
    }
    if (!found)
      break;
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << arr[i][j];
    }
    cout << endl;
  }

  return 0;
}