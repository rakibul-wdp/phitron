#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  map<long long, long long> remaindersCount;

  remaindersCount[0] += 1;
  long long remainder = 0;
  long long count = 0;

  for (int i = 0; i < n; i++)
  {
    remainder = ((remainder + arr[i]) % n + n) % n;
    count += remaindersCount[remainder];
    remaindersCount[remainder] += 1;
  }

  cout << count << "\n";

  return 0;
}