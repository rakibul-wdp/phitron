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
    int maxOutput = -1;

    vector<int> v(1001, 0);

    for (int i = 1; i <= n; i++)
    {
      int temp;
      cin >> temp;
      v[temp] = i;
    }

    for (int i = 1; i <= 1000; i++)
    {
      for (int j = 1; j <= 1000; j++)
      {
        if (v[i] && v[j] && int(__gcd(i, j)) == 1)
          maxOutput = max(maxOutput, v[i] + v[j]);
      }
    }

    cout << maxOutput << "\n";
  }

  return 0;
}