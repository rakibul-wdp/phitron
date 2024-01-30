#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v = {1, 2, 2, 7, 8, 2, 9, 2};

  auto it = find(v.begin(), v.end(), 22);

  if (it == v.end())
    cout << "not found";
  else
    cout << "found";

  return 0;
}