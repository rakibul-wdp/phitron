#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v = {1, 2, 3, 4, 5};
  vector<int> v2 = {7, 8, 9, 10, 11};

  v.insert(v.begin() + 2, v2.begin(), v2.end());
  // v.insert(v.begin() + 2, 10);
  for (int x : v)
    cout << x << " ";

  return 0;
}