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

    vector<int> v;
    set<int> s;

    for (int i = 0; i < n; i++)
    {
      long long x;
      scanf("%ld", &x);
      if ((x <= n) && (!s.count(x)))
        s.insert(x);
      else
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    long long count(v.size()), index(0);

    for (int i = 1; i <= n; i++)
    {
      if (s.count(i))
        continue;
      if (v[index] <= 2 * i)
      {
        count = -1;
        break;
      }
      index++;
    }

    cout << count << "\n";
  }
}