#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];

  int i = 0,
      j = n - 1;
  while (i < j)
  {
    int tmp = v[i];
    v[i] = v[j];
    v[j] = tmp;
    i++;
    j--;
  }

  for (int val : v)
    cout << val << " ";

  return 0;
}