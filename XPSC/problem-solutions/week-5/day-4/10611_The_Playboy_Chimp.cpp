#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int Line[n];
  for (int i = 0; i < n; i++)
    cin >> Line[i];

  int q;
  cin >> q;
  while (q--)
  {
    int height;
    cin >> height;

    int shortG = -1;
    int tall = -1;

    int l = 0;
    int r = n - 1;
    int mid;

    while (l <= r)
    {
      mid = (l + r) / 2;
      if (Line[mid] < height)
      {
        shortG = mid;
        l = mid + 1;
      }
      else
        r = mid - 1;
    }

    l = 0;
    r = n - 1;

    while (l <= r)
    {
      mid = (l + r) / 2;
      if (Line[mid] > height)
      {
        tall = mid;
        r = mid - 1;
      }
      else
        l = mid + 1;
    }

    if (shortG == -1)
      cout << "X ";
    else
      cout << Line[shortG] << ' ';
    if (tall == -1)
      cout << "X"
           << "\n";
    else
      cout << Line[tall] << '\n';
  }

  return 0;
}