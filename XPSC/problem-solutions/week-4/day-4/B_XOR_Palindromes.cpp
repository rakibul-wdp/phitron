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

    string s2;
    for (int i = 0; i < n + 1; i++)
      s2 += '0';

    int count = 0;

    for (int i = 0; i <= (n - 1) / 2; i++)
      if (s[i] != s[n - i - 1])
        count++;

    s2[count] = '1';

    for (int i = count; i <= n - count; i += 2)
    {
      s2[i] = '1';
      if (n % 2)
        s2[i + 1] = '1';
    }

    for (auto i : s2)
      cout << i;
    cout << "\n";
  }

  return 0;
}