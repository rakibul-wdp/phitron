#include <bits/stdc++.h>
using namespace std;

int main()
{
  int testCases;
  cin >> testCases;

  while (testCases--)
  {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int count = 0;

    for (int i = 1; i < n; i++)
      if (s[i] == s[i - 1])
        count++;

    cout << count << "\n";
  }

  return 0;
}