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

    int ans = (k - 1) / (n - 1);
    cout << k + ans << "\n";
  }

  return 0;
}