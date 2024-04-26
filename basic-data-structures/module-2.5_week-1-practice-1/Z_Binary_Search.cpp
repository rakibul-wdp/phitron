#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, q;
  cin >> n >> q;

  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];

  sort(v.begin(), v.end());

  while (q--)
  {
    int x;
    cin >> x;

    if (v.begin() > v.end())
      cout << "not found\n";

    int middle = (v.begin() + v.end()) / 2;

    if (v[middle] == x)
      cout << "found\n";
  }

  return 0;
}