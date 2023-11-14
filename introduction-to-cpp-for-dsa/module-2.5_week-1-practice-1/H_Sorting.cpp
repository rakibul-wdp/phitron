#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  int min = arr[0];
  for (int i = 0; i < n; i++)
  {
    if (min < arr[i])
      swap(min, arr[i]);
  }

  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";

  return 0;
}