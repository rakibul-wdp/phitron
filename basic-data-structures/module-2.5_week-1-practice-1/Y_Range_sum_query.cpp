#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, q;
  cin >> n >> q;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];
  for (int i = 1; i <= q; i++)
  {
    int l, r;
    cin >> l >> r;

    l--, r--;
    int sum = 0;
    for (int i = l; i <= r; i++)
    {
      sum += v[i];
    }

    cout << sum << endl;
  }

  return 0;
}