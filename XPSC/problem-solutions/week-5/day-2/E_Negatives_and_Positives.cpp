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

    int arr[n];
    long long sum = 0;
    int negatives = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];

      if (arr[i] < 0)
      {
        negatives++;
        arr[i] = -arr[i];
      }

      sum += arr[i];
    }

    sort(arr, arr + n);

    if (negatives & 1)
      sum -= 2 * arr[0];
    cout << sum << "\n";
  }

  return 0;
}