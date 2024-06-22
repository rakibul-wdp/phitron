#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    long long n, k, i;
    cin >> n >> k;

    long long a[n], b[n];
    for (i = 0; i < n; i++)
      cin >> a[i];

    long long sum = 0;
    for (i = 0; i < n; i++)
    {
      sum += (a[i] / k);
      a[i] = a[i] % k;
    }

    sort(a, a + n);
    long long j = n - 1;

    for (i = 0; i < j; i++)
    {
      if (a[i] + a[j] >= k)
      {
        sum++;
        j--;
      }
    }

    cout << sum;
    cout << "\n";
  }

  return 0;
}