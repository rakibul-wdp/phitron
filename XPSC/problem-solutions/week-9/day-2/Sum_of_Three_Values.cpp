#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, x;
  cin >> n >> x;

  pair<int, int> pa[5005];
  for (int i = 0; i < n; i++)
  {
    int v;
    cin >> v;

    pa[i] = {v, i + 1};
  }

  sort(pa, pa + n);

  for (int i = 0; i < n; i++)
  {
    int v = x - pa[i].first;
    int r = n - 1;
    for (int l = i + 1; l < r; l++)
    {
      while (l + 1 < r && pa[l].first + pa[r].first > v)
        r--;
      if (pa[l].first + pa[r].first == v)
      {
        cout << pa[i].second << " " << pa[l].second << " " << pa[r].second << "\n";
        return 0;
      }
    }
  }

  cout << "IMPOSSIBLE\n";

  return 0;
}