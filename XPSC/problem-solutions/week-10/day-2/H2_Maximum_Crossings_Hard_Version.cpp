#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;
long long a[N], b[N];
int n;

void update(int x)
{
  while (x <= n)
  {
    b[x]++;
    x += x & (-x);
  }
}

int getSum(int x)
{
  long long ans = 0;
  while (x)
  {
    ans += b[x];
    x -= x & (-x);
  }

  return ans;
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
      cin >> a[i];
      b[i] = 0;
    }

    long long sum = 0;

    for (int i = n; i >= 1; i--)
    {
      sum += getSum(a[i]);
      update(a[i]);
    }

    cout << sum << "\n";
  }

  return 0;
}