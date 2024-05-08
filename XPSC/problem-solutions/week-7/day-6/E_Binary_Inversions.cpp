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

    vector<long long> v(n);
    for (int i = 0; i < n; i++)
      cin >> v[i];

    long long maxo = 0, zero = 0, one = 0;

    for (int i = 0; i < n; i++)
    {
      if (v[i] == 0)
      {
        maxo += one;
        zero++;
      }
      else
        one++;
    }

    long long count1 = 0, maxo1 = 0;
    for (int i = 0; i < n; i++)
    {
      if (v[i] == 0)
      {
        zero--;
        maxo1 = max(maxo1, maxo - count1 + zero);
      }
      else if (v[i] == 1)
        count1++;
    }

    long long count0 = 0, maxo2 = 0;
    for (int i = n - 1; i >= 0; i--)
    {
      if (v[i] == 1)
      {
        one--;
        maxo2 = max(maxo2, maxo + one - count0);
      }
      else
        count0++;
    }
    cout << max({maxo, maxo1, maxo2}) << "\n";
  }

  return 0;
}