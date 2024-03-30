#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, e;
  cin >> n >> e;

  int mat[n][n];
  memset(mat, 0, sizeof(mat));

  while (e--)
  {
    int a, b;
    cin >> a >> b;
    mat[a][b] = 1;
    mat[b][a] = 1;
  }

  if (mat[3][5] == 1)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}

/*
input:
6 6
0 1
1 5
0 4
0 3
3 4
2 4
*/