#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, s, k = 1;
  cin >> n;

  s = n - 1;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= s; j++)
    {
      cout << " ";
    }
    for (int j = 1; j <= k; j++)
    {
      cout << "*";
    }

    s--;
    k += 2;
    cout << endl;
  }

  return 0;
}