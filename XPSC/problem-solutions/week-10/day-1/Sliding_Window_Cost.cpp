#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;

  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  multiset<int> lwr, upr;

  long long sum1 = 0, sum2 = 0;

  for (int i = 0; i < n; i++)
  {
    if (i >= k)
    {
      if (lwr.find(arr[i - k]) != lwr.end())
      {
        lwr.erase(lwr.find(arr[i - k]));
        sum1 = sum1 - arr[i - k];
      }
      else
      {
        upr.erase(upr.find(arr[i - k]));
        sum2 = sum2 - arr[i - k];
      }
    }

    long long sz1 = lwr.size(), sz2 = upr.size();

    if (sz1 <= sz2)
    {
      lwr.insert(arr[i]);
      sum1 = sum1 + arr[i];
    }
    else
    {
      upr.insert(arr[i]);
      sum2 = sum2 + arr[i];
    }

    sz1 = lwr.size(), sz2 = upr.size();

    if (sz1 > 0 && sz2 > 0)
    {
      auto max_lwr = lwr.rbegin();
      auto min_upr = upr.begin();

      if (*max_lwr > *min_upr)
      {
        sum1 = sum1 + (*min_upr - *max_lwr);
        sum2 = sum2 + (*max_lwr - *min_upr);
        lwr.insert(*min_upr);
        upr.insert(*max_lwr);
        upr.erase(upr.find(*min_upr));
        lwr.erase(lwr.find(*max_lwr));
      }
    }

    if (i >= (k - 1))
    {
      long long median = *lwr.rbegin();
      cout << (sz1 * median - sum1) + (sum2 - median * sz2)
           << " ";
    }
  }

  return 0;
}