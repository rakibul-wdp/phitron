#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, a, b;
  cin >> n >> a >> b;

  if (a > b)
    swap(a, b);

  int m = 0;

  for (int i = 1; i <= n - 1; i++)
  {
    int j = a / i;
    int k = b / (n - i);

    if (j >= 1 && k >= 1)
      m = max(m, min(j, k));
  }

  cout << m << "\n";

  return 0;
}