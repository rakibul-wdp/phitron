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

    vector<long long> a;
    for (int i = n + 1;; i++)
    {
      bool find = true;

      for (int j = 2; j * j <= i; j++)
      {
        if (i % j == 0)
        {
          find = false;
          break;
        }
      }

      if (find)
      {
        a.push_back(i);
        break;
      }
    }

    for (int i = a.back() + n;; i++)
    {
      bool find = true;
      for (int j = 2; j * j <= i; j++)
      {
        if (i % j == 0)
        {
          find = false;
          break;
        }
      }

      if (find)
      {
        a.push_back(i);
        break;
      }
    }

    cout << min(a[0] * a[1], a[0] * a[0] * a[0]) << endl;
  }

  return 0;
}