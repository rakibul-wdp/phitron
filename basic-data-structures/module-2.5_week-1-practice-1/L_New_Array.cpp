#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<int> a(n), b(n), c;
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < n; i++)
    cin >> b[i];

  for (int x : b)
    c.push_back(x);
  for (int x : a)
    c.push_back(x);

  for (int x : c)
    cout << x << " ";

  return 0;
}