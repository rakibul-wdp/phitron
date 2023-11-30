#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];

  int count = 0;
  for (int val : v)
  {
    auto it = find(v.begin(), v.end(), val + 1);
    if (it != v.end())
      count++;
  }

  cout << count << endl;

  return 0;
}