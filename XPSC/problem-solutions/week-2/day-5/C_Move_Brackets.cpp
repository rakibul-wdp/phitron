#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int total = 0, flip = 0;

    for (int i = 0; i < n; i++)
    {
      if (s[i] == '(')
        flip++;
      else
        flip--;
      if (flip < 0)
      {
        total++;
        flip = 0;
      }
    }

    cout << total << "\n";
  }

  return 0;
}