#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s = "hello";

  for (int i = 0; i < s.size(); i++)
    cout << s[i] << " ";

  cout << *s.begin() << endl;
  cout << *(s.end() - 1) << endl;

  // string::iterator it;

  for (auto it = s.begin(); it < s.end(); it++)
    cout << *it << endl;

  return 0;
}