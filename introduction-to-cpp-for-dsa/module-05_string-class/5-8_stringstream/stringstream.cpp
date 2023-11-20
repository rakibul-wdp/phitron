#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  getline(cin, s);
  stringstream chandu(s);
  // chandu << s;
  string word;

  while (chandu >> word)
    cout << word << endl;

  return 0;
}

/*

Which of the following options you will use to compare two strings for equality?

- compares()
- equals()
- isEqualTo()
- == operator

*/