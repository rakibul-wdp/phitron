#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k, q;
  cin >> n >> k >> q;

  vector<int> f(200005);
  while (n--)
  {
    int l, r;
    cin >> l >> r;
    f[l]++;
    f[r + 1]--;
  }

  int count = 0;
  for (int i = 0; i < f.size(); i++)
  {
    count += f[i];
    f[i] = (count >= k) ? 1 : 0;
  }

  vector<int> p(200005);
  for (int i = 1; i < p.size(); i++)
    p[i] = f[i - 1] + p[i - 1];

  while (q--)
  {
    int l, r;
    cin >> l >> r;
    cout << p[r + 1] - p[l] << "\n";
  }

  return 0;
}