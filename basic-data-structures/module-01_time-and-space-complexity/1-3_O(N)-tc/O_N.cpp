#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) // O(N)
    cin >> arr[i];

  int sum = 0;
  for (int i = 0; i < n; i += 2) // O(N)
    sum += arr[i];

  cout << sum << endl;

  return 0;
}