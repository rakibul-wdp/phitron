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
    char s[n];
    for (int i = 0; i < n; i++)
      cin >> s[i];

    int count_01 = 0, count_10 = 0;

    for (int i = 0; i < n; i++)
    {
      if (s[i] == '0' && s[i + 1] == '1')
        count_01++;
      else if (s[i] == '1' && s[i + 1] == '0')
        count_10++;
    }

    cout << count_01 + count_10 << endl;
  }

  return 0;
}