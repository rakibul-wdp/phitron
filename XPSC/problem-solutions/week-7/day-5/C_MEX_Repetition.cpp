#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    long long n, k;
    cin >> n >> k;

    long long totSum = n * (n + 1) / 2;
    long long currSum = 0;

    vector<long long> nums;

    for (int i = 0; i < n; i++)
    {
      long long curr;
      cin >> curr;
      nums.push_back(curr);
      currSum += curr;
    }

    nums.push_back(totSum - currSum);
    k = k % (n + 1);

    for (int i = 0; i < n; i++)
      cout << nums[(i - k + n + 1) % (n + 1)] << " ";

    cout << "\n";
  }

  return 0;
}