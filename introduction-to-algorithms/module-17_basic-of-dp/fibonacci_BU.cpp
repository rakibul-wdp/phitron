#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[n];
  arr[0] = 0;
  arr[1] = 1;

  for (int i = 2; i <= n; i++)
    arr[i] = arr[i - 1] + arr[i - 2];

  cout << arr[n] << endl;

  return 0;
}

/*
What is the time complexity of the naive recursive approach to compute the nth Fibonacci number?

1. O(n)
2.
*/