#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, count = 1, b;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
      cin >> b;

      if (b == count)
        count++;
      count++;
    }

    cout << count - 1 << "\n";
  }

  return 0;
}