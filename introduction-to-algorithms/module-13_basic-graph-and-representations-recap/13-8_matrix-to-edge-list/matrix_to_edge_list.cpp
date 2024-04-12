#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int mat[n][n];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
      cin >> mat[i][j];
  }

  vector<pair<int, int>> edge_list;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (mat[i][j] == 1 && i != j)
        edge_list.push_back({i, j});
    }
  }

  for (pair<int, int> edge : edge_list)
    cout << edge.first << " " << edge.second << endl;

  return 0;
}

/*
4
1 1 0 0
0 1 1 0
0 0 1 1
0 1 1 1
*/