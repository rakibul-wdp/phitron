#include <bits/stdc++.h>
using namespace std;

int main()
{
  int testCases;
  cin >> testCases;

  while (testCases--)
  {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
      int twiceHorizontal = 2;
      char firstCharacter = '#';
      char secondCharacter = '.';

      if (i % 2 == 1)
      {
        firstCharacter = '.';
        secondCharacter = '#';
      }

      while (twiceHorizontal--)
      {
        for (int j = 0; j < n; j++)
        {
          int twiceVertical = 2;
          while (twiceVertical--)
          {
            if (j % 2 == 0)
              cout << firstCharacter;
            else
              cout << secondCharacter;
          }
        }
        cout << "\n";
      }
    }
  }

  return 0;
}