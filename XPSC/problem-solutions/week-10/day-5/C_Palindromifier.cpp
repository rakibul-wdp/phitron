#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s, s1;
  cin >> s;

  long long len = s.length();
  s1 = s;
  reverse(s1.begin(), s1.end());

  if (s == s1)
    cout << 0 << "\n";
  else
  {
    cout << 3 << "\n";
    cout << "R " << len - 1 << "\n";
    cout << "L " << len << "\n";
    cout << "L " << 2 << "\n";
  }

  return 0;
}