#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;
int n, m;
int c[N];

int lowBit(int x)
{
  return (-x) & x;
}

void add(int pos, int x)
{
  while (pos <= n)
  {
    c[pos] += x;
    pos += lowBit(pos);
  }
}

int query(int pos)
{
  int res = 0;
  while (pos > 0)
  {
    res += c[pos];
    pos -= lowBit(pos);
  }
  return res;
}

queue<int> q[30];

int main()
{
  string s;

  while (cin >> n)
  {
    cin >> s;
    s = "#" + s;

    for (int i = 0; i < N; i++)
      c[i] = 0;

    for (int i = 0; i < 30; i++)
      while (!q[i].empty())
        q[i].pop();

    for (int i = 1; i <= n; i++)
    {
      q[s[i] - 'a'].push(i);
      add(i, 1);
    }

    long long ans = 0;

    for (int i = n; i >= 1; i--)
    {
      int tp = q[s[i] - 'a'].front();
      q[s[i] - 'a'].pop();
      ans += query(tp) - 1;
      add(tp, -1);
    }

    cout << ans << "\n";
  }

  return 0;
}