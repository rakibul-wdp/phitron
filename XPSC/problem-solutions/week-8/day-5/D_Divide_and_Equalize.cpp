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

    vector<int> a(n);
    unordered_map<int, int> primes;

    for (int i = 0; i < n; i++)
    {
      cin >> a[i];

      for (int j = 2; j <= a[i] / j; j++)
        while (a[i] % j == 0)
        {
          a[i] /= j;
          primes[j]++;
        }

      if (a[i] > 1)
        primes[a[i]]++;
    }

    bool failed = false;

    for (auto prime : primes)
      if (prime.second % n != 0)
      {
        cout << "NO\n";
        failed = true;
        break;
      }

    if (!failed)
      cout << "YES\n";
  }

  return 0;
}