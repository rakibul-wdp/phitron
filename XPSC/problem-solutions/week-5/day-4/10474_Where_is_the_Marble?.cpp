#include <bits/stdc++.h>
using namespace std;

int main()
{
  int cs = 1;
  int n, q;

  while (cin >> n >> q && n && q)
  {
    int A[10005];
    for (int i = 0; i < n; i++)
      cin >> A[i];

    sort(A, A + n);

    cout << "CASE# " << cs++ << ":\n";

    for (int i = 0; i < q; i++)
    {
      int x;
      cin >> x;

      int l = 0, h = n - 1, mid, ck = -1;

      while (l <= h)
      {
        mid = (l + h) / 2;
        if (A[mid] == x)
          ck = mid;
        if (x <= A[mid])
          h = mid - 1;
        else
          l = mid + 1;
      }

      if (ck < 0)
        cout << x << " not found";
      else
        cout << x << " found at " << ck + 1;
      cout << "\n";
    }
  }

  return 0;
}