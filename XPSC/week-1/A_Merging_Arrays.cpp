#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;

  vector<int> a(n);
  vector<int> b(m);

  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < m; i++)
    cin >> b[i];

  vector<int> c(a);

  c.insert(c.end(), b.begin(), b.end());
  sort(c.begin(), c.end());

  for (int val : c)
    cout << val << " ";

  return 0;
}