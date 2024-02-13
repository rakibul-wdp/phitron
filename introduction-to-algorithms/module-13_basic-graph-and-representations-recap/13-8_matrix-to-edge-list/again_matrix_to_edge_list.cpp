#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
  int u, v, w;
  Edge(int u, int v, int w)
  {
    this->u = u;
    this->v = v;
    this->w = w;
  }
};

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

  vector<Edge> edge_list;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (mat[i][j] > 0)
        edge_list.push_back(Edge(i, j, mat[i][j]));
    }
  }

  for (Edge edge : edge_list)
    cout << edge.u << " " << edge.v << " " << edge.w << endl;

  return 0;
}

/*
4
0 10 -1 -1
-1 0 11 -1
-1 -1 0 12
-1 13 12 0
*/