#include <bits/stdc++.h>
using namespace std;

int arr[100050];
int num[100050];

int main()
{
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++)
    cin >> arr[i];

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j * j <= arr[i]; j++)
    {
      if (arr[i] % j == 0)
      {
        num[j]++;

        if (j * j != arr[i])
          num[arr[i] / j]++;
      }
    }
  }

  int ans = 1;

  for (int i = 2; i < 100050; i++)
    ans = max(ans, num[i]);

  cout << ans;

  return 0;
}