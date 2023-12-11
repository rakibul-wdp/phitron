#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k = 1;
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    for (int j = n; j >= k; j--)
    {
      cout << "*";
    }
    k++;
    cout << endl;
  }

  return 0;
}