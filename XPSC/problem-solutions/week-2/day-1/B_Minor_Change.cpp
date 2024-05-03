#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s, t;
  cin >> s >> t;

  int operationsRequiredCount = 0;
  for (int i = 0; i < s.size(); i++)
    if (s[i] != t[i])
      operationsRequiredCount++;

  cout << operationsRequiredCount;

  return 0;
}