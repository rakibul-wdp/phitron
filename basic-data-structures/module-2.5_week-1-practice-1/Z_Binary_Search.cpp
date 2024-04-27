#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, q;
  cin >> n >> q;

  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];

  while (q--)
  {
    int x;
    cin >> x;

    auto it = find(v.begin(), v.end(), x);

    if (it == v.end())
      cout << "not found\n";
    else
      cout << "found\n";
  }

  return 0;
}