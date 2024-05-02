#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
  ll n;
  cin >> n;

  ll sum = 0;
  for (int i = 0; i < n - 1; i++)
  {
    int x;
    cin >> x;
    sum += x;
  }

  ll total_sum = n * (n + 1) / 2;

  cout << total_sum - sum << "\n";

  return 0;
}