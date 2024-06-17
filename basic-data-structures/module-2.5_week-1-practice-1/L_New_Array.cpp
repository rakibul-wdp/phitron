#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<int> c(n * 2);
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;

    c[n + i] = x;
  }

  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;

    c[i] = x;
  }

  for (int i = 0; i < n * 2; i++)
    cout << c[i] << " ";

  return 0;
}