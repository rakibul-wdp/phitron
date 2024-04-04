#include <bits/stdc++.h>
using namespace std;

int main()
{
  int testCases;
  cin >> testCases;

  while (testCases--)
  {
    int numOfCars, numOfPowerOutlets, numOfHours;
    cin >> numOfCars >> numOfPowerOutlets >> numOfHours;

    int arrA[numOfCars], arrB[numOfPowerOutlets];

    for (int i = 0; i < numOfCars; i++)
      cin >> arrA[i];
    for (int i = 0; i < numOfPowerOutlets; i++)
      cin >> arrB[i];

    sort(arrA, arrA + numOfCars, greater<>());
    sort(arrB, arrB + numOfPowerOutlets, greater<>());

    long long ans = 0;

    for (int i = 0; i < min(numOfCars, numOfPowerOutlets); i++)
      ans += min(1ll * arrB[i] * numOfHours, 1ll * arrA[i]);

    cout << ans << "\n";
  }

  return 0;
}