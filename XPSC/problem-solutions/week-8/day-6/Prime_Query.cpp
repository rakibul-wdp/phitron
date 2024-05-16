#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
      cin >> v[i];

    vector<int> one(n + 1);
    vector<int> two(n + 1);

    for (int i = 1; i <= n; i++)
    {
      int a = 0;
      if (v[i - 1] == 1)
        a++;
      one[i] = a + one[i - 1];
      int b = 0;
      if (v[i - 1] == 2)
        b++;
      two[i] = b + two[i - 1];
    }

    int q;
    cin >> q;

    while (q--)
    {
      int l, r, k;
      cin >> l >> r >> k;
      int inOne = one[r] - one[l - 1];
      int inTwo = two[r] - two[l - 1];
      int nm = r - l + 1;
      if (inOne > inTwo)
        swap(inOne, inTwo);
      int c = 0;
      int ar = min(k, min(nm - inOne - inTwo, inTwo - inOne));
      inOne += ar;
      c += ar;
      if ((inOne + inTwo) == nm)
      {
        int t = min(k - c, (inTwo - inOne) / 2);
        inTwo -= t;
        inOne += t;
        c += t;
      }
      else
      {
        int dif = min(nm - (inOne + inTwo), k - c);
        inTwo += dif / 2 + dif % 2;
        inOne += dif / 2;
      }

      long long ans = (long long)inOne * (long long)inTwo;

      cout << ans << "\n";
    }
  }

  return 0;
}