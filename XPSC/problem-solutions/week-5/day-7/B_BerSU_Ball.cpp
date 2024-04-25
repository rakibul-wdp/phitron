#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  int m;
  cin >> m;

  int arr2[m];
  for (int i = 0; i < m; i++)
    cin >> arr2[i];

  sort(arr, arr + n);
  sort(arr2, arr2 + m);

  int ans = 0, k = 0;

  for (int i = 0; i < n; i++)
    for (int j = k; j < m; j++)
    {
      if (abs(arr[i] - arr2[j]) < 2)
      {
        ans++;
        k = j + 1;
        break;
      }
      else if (arr2[j] - arr[i] > 2)
        break;
    }

  cout << ans << "\n";

  return 0;
}