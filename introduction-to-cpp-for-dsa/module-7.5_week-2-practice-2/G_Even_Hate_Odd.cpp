#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  for (int i = 1; i <= t; i++)
  {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    int count = 0;
    if (n % 2 == 0)
    {
      for (int j = 0; j < n; j++)
      {
        if (arr[j] % 2 == 0)
          count++;
      }
    }

    if (n % 2 == 0)
      cout << abs((n / 2) - count) << endl;
    else
      cout << "-1" << endl;
  }

  return 0;
}