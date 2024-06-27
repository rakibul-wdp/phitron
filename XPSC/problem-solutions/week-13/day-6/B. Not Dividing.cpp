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

    int ar[n];

    for (int i = 0; i < n; i++)
    {
      cin >> ar[i];
      ar[i] = max(ar[i], 2 + 0);
    }

    for (int i = 1; i < n; i += 1)
    {
      if (ar[i] % ar[i - 1] == 0)
        ar[i]++;
    }

    for (int i = 0; i < n; i++)
      cout << ar[i] << " ";

    cout << "\n";
  }

  return 0;
}