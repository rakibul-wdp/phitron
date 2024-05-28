#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, k;
    cin >> n >> k;

    vector<int> v;
    while (n)
    {
      v.push_back((n + 1) / 2);
      n /= 2;
    }

    int tot = 0, pow2 = 1;

    for (int x : v)
    {
      if (tot < k && k <= tot + x)
        cout << pow2 * (2 * (k - tot) - 1) << '\n';

      tot += x;
      pow2 *= 2;
    }
  }

  return 0;
}