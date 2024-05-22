#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, x;
  cin >> n >> x;

  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  map<long long, long long> prefSums;

  prefSums[0] = 1;
  long long pref = 0;
  long long count = 0;

  for (int i = 0; i < n; i++)
  {
    pref += arr[i];
    count += (prefSums[pref - x]);
    prefSums[pref] += 1;
  }

  cout << count << "\n";

  return 0;
}