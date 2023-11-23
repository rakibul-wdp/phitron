#include <bits/stdc++.h>
using namespace std;

void print(stringstream &ss)
{
  string word;
  if (ss >> word)
  {
    for (int i = word.size() - 1; i >= 0; i--)
      cout << word[i];

    if (ss.peek() != EOF)
      cout << " ";

    print(ss);
  }
}

int main()
{
  string s;
  getline(cin, s);
  stringstream ss(s);

  print(ss);

  return 0;
}