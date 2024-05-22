#include <bits/stdc++.h>
using namespace std;

const int maxN = 2e5;
int n, x, l, sum, cnt, arr[maxN + 1];

int main()
{
  cin >> n >> x;

  for (int i = 1; i <= n; i++)
  {
    cin >> arr[i];
    sum += arr[i];
    while (sum > x)
      sum -= arr[l++];
    if (sum == x)
      cnt++;
  }

  cout << cnt << "\n";

  return 0;
}