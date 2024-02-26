#include <bits/stdc++.h>
using namespace std;

const int N = 100005;
int dp[N];

bool knapsack(int current, int n)
{
  if (current == n)
    return true;

  if (current > n)
    return false;

  if (dp[current] != -1)
    return dp[current];

  bool add = knapsack(current + 3, n);
  bool multiply = knapsack(current * 2, n);

  return dp[current] = add || multiply;

  // return dp[current];
}

int main()
{
  int t;
  cin >> t;

  for (int i = 0; i < N; i++)
    dp[i] = -1;

  while (t--)
  {
    int n;
    cin >> n;

    if (knapsack(1, n))
      cout << "YES" << endl;
    else
      cout << "NO" << endl;

    for (int i = 0; i < N; i++)
      dp[i] = -1;
  }

  return 0;
}
