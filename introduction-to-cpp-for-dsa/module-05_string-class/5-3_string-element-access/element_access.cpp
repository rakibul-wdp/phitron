#include <bits/stdc++.h>
using namespace std;

int main()
{
  string abul;
  cin >> abul;

  cout << abul[0] << endl;
  cout << abul.at(0) << endl;
  cout << abul.front() << endl;
  cout << abul[abul.size() - 1] << endl;
  cout << abul.back() << endl;

  return 0;
}