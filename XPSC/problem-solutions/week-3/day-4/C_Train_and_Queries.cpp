#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    map<int, vector<int>> indexes;
    for (int i = 0; i < n; i++)
      indexes[arr[i]].push_back(i);

    while (k--)
    {
      int a, b;
      cin >> a >> b;

      if (indexes[a].empty() || indexes[b].empty())
        cout << "NO"
             << "\n";
      else if (a == b)
        cout << "YES"
             << "\n";
      else if (indexes[a].front() < indexes[b].back())
        cout << "YES"
             << "\n";
      else
        cout << "NO"
             << "\n";
    }
  }

  return 0;
}