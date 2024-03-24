#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    list<int> l;

    int x;
    for (int i = 0; i < n; i++)
    {
      cin >> x;
      l.push_back(x);
    }

    // sort(l)

    for (int element : l)
      cout << element << " ";
  }

  return 0;
}