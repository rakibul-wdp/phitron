#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    string s;
    cin >> s;

    bool flag = false;

    for (int i = 0; i <= s.size(); i++)
      if (s[i] == 'i' && s[i + 1] == 't')
        flag = true;

    cout << (flag ? "YES" : "NO") << "\n";
  }

  return 0;
}