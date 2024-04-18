#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  bool flag = false;
  int m = (1 << n);
  for (int i = 0; i < m; i++)
  {
    int sum = 0;
    for (int j = 0; j < n; j++)
    {
      if (i & (1 << j))
        sum += arr[j];
      else
        sum -= arr[j];
    }

    if (sum % 360 == 0)
    {
      flag = true;
      break;
    }
  }

  if (flag)
    cout << "YES"
         << "\n";
  else
    cout << "NO"
         << "\n";

  return 0;
}