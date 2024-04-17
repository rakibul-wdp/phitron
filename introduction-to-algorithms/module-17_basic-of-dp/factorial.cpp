#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
  // base case
  if (n == 0)
    return 1;

  int smallFactorial = fact(n - 1);
  return smallFactorial * n;
}

int main()
{
  int n;
  cin >> n;

  cout << fact(n) << endl;

  return 0;
}