#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  int flag = 1;
  int i = 0,
      j = n - 1;
  while (i < j)
  {
    if (arr[i] != arr[j])
      flag = 0;
    i++;
    j--;
  }

  flag ? cout << "YES" : cout << "NO";

  return 0;
}