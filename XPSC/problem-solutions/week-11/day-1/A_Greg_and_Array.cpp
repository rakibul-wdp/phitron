#include <bits/stdc++.h>
using namespace std;

int l[100000], r[100000], d[100000], inc[100001], a[100000];
long long dInA[100001];

int main()
{
  int n, m, k;
  cin >> n >> m >> k;

  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    a[i] = x;
  }

  for (int i = 0; i < m; i++)
    cin >> l[i] >> r[i] >> d[i];

  for (int i = 0; i < k; i++)
  {
    int x, y;
    cin >> x >> y;
    inc[x - 1]++;
    inc[y]--;
  }

  long long c = 0;
  for (int i = 0; i < m; i++)
  {
    c += inc[i];
    long long newValueD = c * 1LL * (d[i]);
    dInA[l[i] - 1] += newValueD;
    dInA[r[i]] -= newValueD;
  }

  c = 0;
  for (int i = 0; i < n; i++)
  {
    c += dInA[i];
    if (i)
      cout << " ";
    cout << c + 1LL * (a[i]) << "\n";
  }

  cout << "\n";

  return 0;
}