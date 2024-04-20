#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    string s1, s2;
    cin >> s1 >> s2;

    int n = s1.length();
    int m = s2.length();
    int dp[21][21];
    for (int i = 0; i < s1.size(); i++)
      dp[i][0] = 0;

    for (int i = 0; i < s2.size(); i++)
      dp[0][i] = 0;

    int res = 0;
    for (int i = 1; i <= s1.size(); i++)
    {
      for (int j = 1; j <= s2.size(); j++)
      {
        if (s1[i - 1] == s2[j - 1])
          dp[i][j] = 1 + dp[i - 1][j - 1];
        else
          dp[i][j] = 0;

        res = max(res, dp[i][j]);
      }
    }

    cout << n + m - 2 * res << endl;
  }
}