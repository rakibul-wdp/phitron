#include <bits/stdc++.h>
using namespace std;

int main()
{
  int testCases;
  cin >> testCases;

  while (testCases--)
  {
    int n, lestNumLoves, biggestNumLoves;
    cin >> n >> lestNumLoves >> biggestNumLoves;

    int arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    int maxHappiness = 0, minHappiness = 0, currentHappiness = 0;

    for (int i = 0; i < n; i++)
    {
      if (lestNumLoves <= arr[i] && arr[i] <= biggestNumLoves)
        currentHappiness += 1;
      else
        currentHappiness -= 1;

      maxHappiness = max(maxHappiness, currentHappiness);
      minHappiness = min(minHappiness, currentHappiness);
    }

    cout << maxHappiness << " " << minHappiness << "\n";
  }

  return 0;
}