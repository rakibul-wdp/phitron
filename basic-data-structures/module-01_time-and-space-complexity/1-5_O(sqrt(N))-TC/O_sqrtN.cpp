#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  for (int i = 1; i <= sqrt(n); i++) // O(sqrt(N))
  {
    if (n % i == 0)
    {
      cout << i << " ";
      if (n / i != i)
        cout << n / i << endl;
    }
  }

  cout << endl;

  for (int i = 1; i * i <= n; i++)
    cout << i << " ";

  return 0;
}