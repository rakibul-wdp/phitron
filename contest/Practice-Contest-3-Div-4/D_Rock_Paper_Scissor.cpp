#include <bits/stdc++.h>
using namespace std;

int main()
{
  int testCases;
  cin >> testCases;

  while (testCases--)
  {
    int numberOfRounds;
    cin >> numberOfRounds;

    string movesByChef;
    cin >> movesByChef;

    string movesByChefina;
    cin >> movesByChefina;

    int win = 0, loose = 0, draw = 0;
    for (int i = 0; i < numberOfRounds; i++)
    {
      if (movesByChef[i] == movesByChefina[i])
        draw++;
      else if (movesByChef[i] == 'S')
      {
        if (movesByChefina[i] == 'R')
          loose++;
        else
          win++;
      }
      else if (movesByChef[i] == 'R')
      {
        if (movesByChefina[i] == 'P')
          loose++;
        else
          win++;
      }
      else
      {
        if (movesByChefina[i] == 'S')
          loose++;
        else
          win++;
      }
    }

    int ans = 0;
    while (win <= loose)
    {
      ans++;
      if (loose > 0)
      {
        loose--;
        win++;
      }
      else
      {
        draw--;
        win++;
      }
    }

    cout << ans << '\n';
  }

  return 0;
}