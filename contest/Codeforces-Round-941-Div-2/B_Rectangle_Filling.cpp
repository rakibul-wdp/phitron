#include <bits/stdc++.h>
using namespace std;

int main()
{
  int testCases;
  cin >> testCases;

  while (testCases--)
  {
    int n, m;
    cin >> n >> m;

    int blackCount = 0, whiteCount = 0;

    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++)
      {
        char color;
        cin >> color;

        if (color == 'B')
          blackCount++;
        else
          whiteCount++;
      }

    if ((blackCount % 2 == 0 && whiteCount % 2 == 0) || (blackCount % 2 != 0 && whiteCount % 2 != 0))
      cout << "YES\n";
    else
      cout << "NO\n";
  }

  return 0;
}