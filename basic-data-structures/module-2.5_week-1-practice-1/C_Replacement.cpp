#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];

  for (int val : v)
  {
    if (val > 0)
      val = 1;
    else if (val < 0)
      val = 2;

    cout << val << " ";
  }

  return 0;
}