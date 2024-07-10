#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long m, n, i, j, k;
  cin >> n >> k;

  long long x = (n + k);
  long long count = 0;

  while (x != (count * (count + 1)) / 2)
  {
    count++, x--;
  }

  cout << n - count << "\n";

  return 0;
}