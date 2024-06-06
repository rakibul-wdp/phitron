#include <bits/stdc++.h>
using namespace std;

int main()
{
  int testCases;
  cin >> testCases;

  while (testCases--)
  {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    int initialSum = 0;

    for (int i = 0; i < n - 1; i++)
      initialSum += abs(arr[i] - arr[i + 1]);

    int maxSum = initialSum;

    for (int i = 0; i < n; i++)
    {
      if (i > 0)
      {
        int currentSum = initialSum - abs(arr[i] - arr[i - 1]) + abs(1 - arr[i - 1]);

        if (i < n - 1)
        {
          currentSum -= abs(arr[i] - arr[i + 1]);
          currentSum += abs(1 - arr[i + 1]);
        }

        maxSum = max(maxSum, currentSum);

        currentSum = initialSum - abs(arr[i] - arr[i - 1]) + abs(k - arr[i - 1]);

        if (i < n - 1)
        {
          currentSum -= abs(arr[i] - arr[i + 1]);
          currentSum += abs(k - arr[i + 1]);
        }

        maxSum = max(maxSum, currentSum);
      }
      else
      {
        int currentSum = initialSum;

        if (i < n - 1)
        {
          currentSum -= abs(arr[i] - arr[i + 1]);
          currentSum += abs(1 - arr[i + 1]);
        }

        maxSum = max(maxSum, currentSum);

        currentSum = initialSum;

        if (i < n - 1)
        {
          currentSum -= abs(arr[i] - arr[i + 1]);
          currentSum += abs(k - arr[i + 1]);
        }

        maxSum = max(maxSum, currentSum);
      }
    }

    cout << maxSum << endl;
  }

  return 0;
}