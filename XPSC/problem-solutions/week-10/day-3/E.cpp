#include <bits/stdc++.h>
using namespace std;

const long long maxm = 1e6 + 5;
long long arr[maxm];
long long xx[maxm];
long long l[maxm], r[maxm];
long long c[maxm];

long long lowbit(long long i)
{
  return i & -i;
}

void add(long long i)
{
  while (i < maxm)
  {
    c[i]++;
    i += lowbit(i);
  }
}

long long ask(long long i)
{
  long long ans = 0;
  while (i)
  {
    ans += c[i];
    i -= lowbit(i);
  }
  return ans;
}

int main()
{
  long long n;
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    cin >> arr[i];
    xx[i] = arr[i];
  }

  sort(xx + 1, xx + 1 + n);

  long long num = unique(xx + 1, xx + 1 + n) - xx - 1;

  for (int i = 1; i <= n; i++)
    arr[i] = lower_bound(xx + 1, xx + 1 + num, arr[i]) - xx;

  for (int i = 1; i <= n; i++)
  {
    l[i] = (i - 1) - ask(arr[i]);
    add(arr[i]);
  }

  memset(c, 0, sizeof c);

  for (int i = n; i >= 1; i--)
  {
    r[i] = ask(arr[i] - 1);
    add(arr[i]);
  }

  long long ans = 0;

  for (int i = 1; i <= n; i++)
    ans += l[i] * r[i];

  cout << ans << "\n";

  return 0;
}