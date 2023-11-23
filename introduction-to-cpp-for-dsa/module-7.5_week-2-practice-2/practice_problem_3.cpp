#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  getline(cin, s);
  string x;
  cin >> x;

  int count = 0;
  stringstream chandu(s);
  string word;

  while (chandu >> word)
  {
    if (word == x)
      count++;
  }

  cout << count << endl;

  return 0;
}