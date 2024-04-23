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

    int totalPairs = n * (n - 1) / 2;
    int nums[totalPairs];
    for (int i = 0; i < totalPairs; i++)
      cin >> nums[i];

    sort(nums, nums + totalPairs);

    for (int i = 0; i < totalPairs; i += --n)
      cout << nums[i] << " ";

    cout << nums[totalPairs - 1] << "\n";
  }

  return 0;
}