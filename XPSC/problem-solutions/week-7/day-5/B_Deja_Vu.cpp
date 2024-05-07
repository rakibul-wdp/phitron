#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, q;
    cin >> n >> q;

    int arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    int brr[q];
    for (int i = 0; i < q; i++)
      cin >> brr[i];

    set<int> hs;

    for (int i = 0; i < q; i++)
    {
      if (hs.count(brr[i]))
        continue;

      hs.insert(brr[i]);

      for (int j = 0; j < n; j++)
      {
        if (arr[j] % (1 << brr[i]) == 0)
          arr[j] += (1 << (brr[i] - 1));
      }
    }

    for (auto i : arr)
      cout << i << " ";
    cout << '\n';
  }

  return 0;
}