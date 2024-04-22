#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int t, sum = 0;
  int counts[n];

  for (int i = 0; i < n; i++)
  {
    cin >> t;
    sum += t;
    counts[i] = sum;
  }

  int index = 0, worms[sum + 1];

  for (int i = 1; i <= sum; i++)
  {
    if (i > counts[index])
      index++;
    worms[i] = index + 1;
  }

  int m;
  cin >> m;

  for (int i = 0; i < m; i++)
  {
    cin >> t;
    cout << worms[t] << endl;
  }

  return 0;
}