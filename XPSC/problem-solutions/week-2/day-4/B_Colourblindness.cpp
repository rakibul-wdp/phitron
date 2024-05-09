#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    string firstRow, secondRow;
    cin >> firstRow;
    cin >> secondRow;

    bool flag = false;
    for (int i = 0; i < n; i++)
      if (firstRow[i] != secondRow[i] && (firstRow[i] == 'R' || secondRow[i] == 'R'))
      {
        flag = true;
        break;
      }

    if (flag)
      cout << "NO";
    else
      cout << "YES";

    cout << "\n";
  }

  return 0;
}