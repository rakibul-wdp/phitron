#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v = {7, 8, 9};

  // vector<int>::iterator it;

  for (auto it = v.begin(); it < v.end(); it++)
    cout << *it << " ";

  return 0;
}