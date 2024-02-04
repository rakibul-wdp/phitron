#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long n, q;
  cin >> n >> q;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  long long pre[n];
  pre[0] = arr[0];
  for (int i = 1; i < n; i++)
    pre[i] = arr[i] + pre[i - 1];

  while (q--)
  {
    long long l, r;
    cin >> l >> r;

    l--, r--;
    long long sum;

    if (l == 0)
      sum = pre[r];
    else
      sum = pre[r] - pre[l - 1];

    cout << sum << endl;
  }

  return 0;
}