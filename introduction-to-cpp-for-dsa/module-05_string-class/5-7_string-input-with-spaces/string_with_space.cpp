#include <bits/stdc++.h>
using namespace std;

int main()
{
  int x;
  cin >> x;
  // cin.ignore(); if cin.ignore() or getchar()
  getchar();
  string s;
  getline(cin, s);

  cout << x << endl
       << s << endl;
  cout << s.size() << endl;

  return 0;
}