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

    int one = 0, zero = 0;

    for (int i = 0; i < n; i++)
    {
      if (s[i] == '0')
        zero++;
      else
        one++;
    }

    int minPair = min(one, zero);

    if (minPair % 2 == 0)
      cout << "Ramos" << endl;
    else
      cout << "Zlatan" << endl;
  }

  return 0;
}