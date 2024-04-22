#include <bits/stdc++.h>
using namespace std;

int cost[100000];

int main()
{
  int n, x;
  cin >> n;

  int mx = 0;

  for (int i = 0; i < n; i++)
  {
    cin >> x;
    cost[x]++;
    if (x > mx)
      mx = x;
  }

  for (int i = 1; i <= mx; i++)
    cost[i] += cost[i - 1];

  int q;
  cin >> q;

  while (q--)
  {
    int m;
    cin >> m;

    if (m >= mx)
      cout << n << endl;
    else
      cout << cost[m] << endl;
  }

  return 0;
}