#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;
int a[N];

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    int mm = 1;
    for (int i = 1; i <= n; i++)
    {
      cin >> a[i];
      if (a[i] < a[mm])
        mm = i;
    }

    bool sorted = true;
    for (int i = mm; i + 1 <= n; i++)
    {
      if (a[i] > a[i + 1])
      {
        cout << -1 << "\n";
        sorted = false;
        break;
      }
    }

    if (sorted)
      cout << mm - 1 << "\n";
  }

  return 0;
}