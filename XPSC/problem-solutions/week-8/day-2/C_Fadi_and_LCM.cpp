#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long n;
  cin >> n;

  long long a = 1, b = n;
  long long maxL = n;

  for (long long i = 1; i <= sqrt(n); i++)
    if (n % i == 0)
      if (__gcd(i, n / i) == 1 && maxL > min(i, n / i))
      {
        maxL = n / i;
        a = i;
        b = n / i;
      }

  cout << a << " " << b << "\n";

  return 0;
}