#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, q;
  cin >> n >> q;

  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];

  while (q--)
  {
    int l, r;
    cin >> l >> r;

    int sum = 0;

    for (int i = v[l - 1]; i <= v[r - 1]; i++)
      sum += v[i];

    cout << sum << "\n";
  }

  return 0;
}