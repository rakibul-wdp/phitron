#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> v;

bool check(long long x)
{
  int moves = 0;

  for (int i = n / 2; i < n; i++)
  {
    if (x - v[i] > 0)
      moves += x - v[i];
    if (moves > k)
      return false;
  }

  if (moves <= k)
    return true;
  else
    return false;
}

int main()
{
  cin >> n >> k;

  for (int i = 1; i <= n; i++)
  {
    int x;
    cin >> x;
    v.push_back(x);
  }

  sort(v.begin(), v.end());
  int smallInt = 1;
  long long big = 2000000000;

  while (smallInt != big)
  {
    long long mid = (smallInt + big + 1) / 2;

    if (check(mid))
      smallInt = mid;
    else
      big = mid - 1;
  }

  cout << smallInt;

  return 0;
}