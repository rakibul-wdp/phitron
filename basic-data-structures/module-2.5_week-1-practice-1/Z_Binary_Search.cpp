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

    for (int el : v)
      cout << el << "\n";
    cout << "\n";
    // if (el == x)
    //   cout << "found"
    //        << "\n";
    // else
    //   cout << "not found"
    //        << "\n";
  }

  return 0;
}