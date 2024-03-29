#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    string s;
    cin >> n >> s;

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    string onceTime = "";

    if (s[0] == 'm')
      onceTime += 'm';
    else
      onceTime += s[0];

    for (int i = 1; i < n; i++)
      if (s[i] != s[i - 1])
        onceTime += s[i];

    if (onceTime == "meow")
      cout << "YES"
           << "\n";
    else
      cout << "NO"
           << "\n";
  }

  return 0;
}