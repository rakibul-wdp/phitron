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

    long long ans = 0;
    int arr[n];
    vector<int> used(n);

    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];

      if (arr[i] == 0)
      {
        long long mx = 0;
        int index = 0;

        for (int j = 0; j < i; j++)
        {
          if (used[j] == 0)
          {
            if (mx < arr[j])
            {
              mx = arr[j];
              index = j;
            }
          }
        }

        used[index]++;
        ans += mx;
      }
    }

    cout << ans << "\n";
  }

  return 0;
}