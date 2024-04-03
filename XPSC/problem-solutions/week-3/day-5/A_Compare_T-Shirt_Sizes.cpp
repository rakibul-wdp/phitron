#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    string s1, s2;
    cin >> s1 >> s2;

    int n1 = s1.size(), n2 = s2.size();

    if (s1 == s2)
      cout << "=";
    else if (s1[n1 - 1] == 'M' && s2[n2 - 1] == 'S')
      cout << ">";
    else if (s1[n1 - 1] == 'M' && s2[n2 - 1] == 'L')
      cout << "<";
    else if (s1[n1 - 1] == 'S' && s2[n2 - 1] == 'S')
      if (n1 > n2)
        cout << "<";
      else
        cout << ">";
    else if (s1[n1 - 1] == 'S' && s2[n2 - 1] == 'M')
      cout << "<";
    else if (s1[n1 - 1] == 'S' && s2[n2 - 1] == 'L')
      cout << "<";
    else if (s1[n1 - 1] == 'L' && s2[n2 - 1] == 'L')
      if (n1 > n2)
        cout << ">";
      else
        cout << "<";
    else if (s1[n1 - 1] == 'L' && s2[n2 - 1] == 'M')
      cout << ">";
    else if (s1[n1 - 1] == 'L' && s2[n2 - 1] == 'S')
      cout << ">";

    cout << "\n";
  }

  return 0;
}