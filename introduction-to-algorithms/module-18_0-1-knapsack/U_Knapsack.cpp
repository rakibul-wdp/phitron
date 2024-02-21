#include <bits/stdc++.h>
using namespace std;

int knapsack(int n, int weight[], int value[], int W)
{
  if (n < 0 || W == 0)
    return 0;

  if (weight[n] <= W)
  {
    int op1 = knapsack(n - 1, weight, value, W = weight[n]) + value[n];
    int op2 = knapsack(n - 1, weight, value, W);
    return max(op1, op2);
  }
  else
  {
    int op2 = knapsack(n - 1, weight, value, W);
    return op2;
  }
}

int main()
{
  int n, W;
  cin >> n >> W;
  int weight[n], value[n];
  for (int i = 0; i < n; i++)
  {
    int w, v;
    cin >> w >> v;
    weight[i] = w;
    value[i] = v;
  }

  for (int i = 0; i < n; i++)
    cout << weight[i] << " ";
  cout << endl;
  for (int i = 0; i < n; i++)
    cout << value[i] << " ";

  cout << knapsack(n - 1, weight, value, W) << endl;

  return 0;
}