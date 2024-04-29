#include <bits/stdc++.h>
using namespace std;

long long findMinSum(const vector<int> &a, int k)
{
  auto n = a.size();
  auto canSplit = [&a, k, n](long long sum)
  {
    int cnt = 1;
    long long tempSum = 0;
    for (const auto x : a)
    {
      if (tempSum + x > sum)
      {
        cnt++;
        tempSum = 0;
      }
      if (x > sum || cnt > k)
        return false;
      tempSum += x;
    }

    return true;
  };

  long long lo = 0, hi = n * 1e9;
  while (lo + 1 < hi)
  {
    auto mid = lo + (hi - lo) / 2;
    if (canSplit(mid))
      hi = mid;
    else
      lo = mid;
  }

  return hi;
}

int main()
{
  int n, k;
  while (cin >> n >> k)
  {
    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];
    cout << findMinSum(a, k) << "\n";
  }
  return 0;
}