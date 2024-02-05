#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];

  int pre[n];
  pre[0] = v[0];
  for (int i = 1; i < n; i++)
    pre[i] = v[i] + pre[i - 1];

  int i = 0, j = n - 1;
  while (i < j)
  {
    int tmp = pre[i];
    pre[i] = pre[j];
    pre[j] = tmp;
    i++;
    j--;
  }

  for (int i = 0; i < n; i++)
    cout << pre[i] << " ";

  return 0;
}