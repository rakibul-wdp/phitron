#include <bits/stdc++.h>
using namespace std;

bool prime(int n)
{
  if (n == 0 || n == 1)
    return false;

  for (int i = 2; i <= sqrt(n); i++)
  {
    if (n % i == 0)
      return false;
  }

  return true;
}

int main()
{
  int n;
  cin >> n;

  if (prime(n) || n == 1)
    cout << "1\n";
  else if (n % 2 == 0)
    cout << "2\n";
  else
  {
    if (prime(n - 2))
      cout << "2\n";
    else
      cout << "3\n";
  }

  return 0;
}