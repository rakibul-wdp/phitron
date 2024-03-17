#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;

  bool found = false;
  char smallest = 'z';
  for (char c = 'a'; c <= 'z'; c++)
  {
    bool exists = false;
    for (char ch : s)
    {
      if (ch == c)
      {
        exists = true;
        break;
      }
    }
    if (!exists)
    {
      found = true;
      smallest = min(smallest, c);
    }
  }

  if (found)
    cout << smallest << "\n";
  else
    cout << "None\n";

  return 0;
}