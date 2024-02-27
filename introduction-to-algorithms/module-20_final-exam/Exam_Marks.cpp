#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];

bool subset_sum(int n, int arr[], int s)
{
  if (n == 0)
  {
    if (s == 0)
      return true;
    else
      return false;
  }

  if (dp[n][s] != -1)
    return dp[n][s];

  if (arr[n - 1] <= s)
  {
    bool op1 = subset_sum(n - 1, arr, s - arr[n - 1]);
    bool op2 = subset_sum(n - 1, arr, s);
    return dp[n][s] = op1 || op2;
  }
  else
    return dp[n][s] = subset_sum(n - 1, arr, s);
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    int s = 1000 - m;

    bool dp[n + 1][s + 1];
    dp[0][0] = true;
    for (int i = 1; i <= s; i++)
      dp[0][i] = false;

    for (int i = 1; i <= n; i++)
    {
      for (int j = 0; j <= s; j++)
      {
        if (arr[i - 1] <= j)
          dp[i][j] = dp[i - 1][j - arr[i - 1]] || dp[i - 1][j];
        else
          dp[i][j] = dp[i - 1][j];
      }
    }

    if (dp[n][s])
      cout << "YES" << endl;
    else
      cout << "NO" << endl;

    // for (int i = 0; i <= n; i++)
    // {
    //   for (int j = 0; j <= m; j++)
    //     dp[i][j] = -1;
    // }

    // int s = 1000 - m;
    // if (s == 0 || subset_sum(n, arr, s))
    //   cout << "YES" << endl;
    // else
    //   cout << "NO" << endl;
  }

  return 0;
}

/*
4
1 2 4 6
7
*/