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
    string a;
    cin >> a;

    string b = "";

    for (int i = n - 1; i >= 0;)
    {
      int val;
      if (a[i] == '0')
      {
        val = (a[i - 2] - 48) * 10 + a[i - 1] - 48;
        i -= 3;
      }
      else
      {
        val = a[i] - 48;
        i--;
      }

      b += char(val + 97 - 1);
    }

    reverse(b.begin(), b.end());
    cout << b << "\n";
  }

  return 0;
}