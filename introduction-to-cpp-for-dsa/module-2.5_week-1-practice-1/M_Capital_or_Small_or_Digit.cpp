#include <bits/stdc++.h>
using namespace std;

int main()
{
  char s;
  cin >> s;

  if (s >= 48 && s <= 57)
    cout << "IS DIGIT" << endl;
  else if (s >= 65 && s <= 90 || s >= 97 && s <= 122)
  {
    cout << "ALPHA" << endl;
    if (s >= 65 && s <= 90)
      cout << "IS CAPITAL" << endl;
    else
      cout << "IS SMALL" << endl;
  }

  return 0;
}