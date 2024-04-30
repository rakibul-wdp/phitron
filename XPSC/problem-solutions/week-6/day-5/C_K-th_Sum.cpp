#include <bits/stdc++.h>
using namespace std;

int findKthSum(vector<int> &a, vector<int> &b, const int k)
{
  sort(b.begin(), b.end());
  auto hasLessThanK = [&a, &b, k](int x)
  {
    int cnt = 0;
    for (const auto &ai : a)
    {
      if (ai < x)
      {
        cnt += (lower_bound(b.begin(), b.end(), x - ai) - b.begin());
        if (cnt >= k)
          return false;
      }
    }

    return true;
  };

  int lo = 1, hi = 2e9 + 1;

  while (lo + 1 < hi)
  {
    auto mid = lo + (hi - lo) / 2;
    if (hasLessThanK(mid))
      lo = mid;
    else
      hi = mid;
  }

  return lo;
}

int main()
{
  int n, k;
  while (cin >> n >> k)
  {
    vector<int> a(n), b(n);
    for (auto i = 0; i < n; i++)
      cin >> a[i];

    for (auto i = 0; i < n; i++)
      cin >> b[i];

    cout << findKthSum(a, b, k) << "\n";
  }

  return 0;
}