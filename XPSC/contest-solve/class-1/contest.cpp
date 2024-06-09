#include <bits/stdc++.h>
using namespace std;

int main()
{
  int testCases;
  cin >> testCases;

  while (testCases--)
  {
    string input;
    cin >> input;

    bool isValid = true;

    if (input[0] != '1')
      isValid = false;
    else
    {
      for (int index = 1; index < input.size(); ++index)
      {
        if (index != input.size() - 1)
        {
          if (input[index] == '0')
          {
            isValid = false;
            break;
          }
        }
        else
        {
          if (input[index] > '8')
          {
            isValid = false;
            break;
          }
        }
      }
    }

    if (isValid)
      cout << "YES\n";
    else
      cout << "NO\n";
  }

  return 0;
}