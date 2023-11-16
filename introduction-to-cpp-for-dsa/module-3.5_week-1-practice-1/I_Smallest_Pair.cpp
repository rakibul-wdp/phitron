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
    for (int j = 0; j < n; j++)
      cin >> arr[j];

    long long min_value = arr[0] + arr[1] + 1;
    for (int j = 0; j < n - 1; j++)
    {
      for (int k = j + 1; k < n; k++)
      {
        if (arr[j] + arr[k] + k - j < min_value)
          min_value = arr[j] + arr[k] + k - j;
      }
    }

    cout << min_value;
  }

  return 0;
}