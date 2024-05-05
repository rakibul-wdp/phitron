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

    vector<int> count(n + 1, 0), mx(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;

      if (x <= n)
        count[x]++;
    }

    for (int i = 1; i <= n; i++)
    {
      for (int j = i; j <= n; j += i)
        mx[j] += count[i];
    }

    cout << *max_element(mx.begin(), mx.end()) << "\n";
  }

  return 0;
}