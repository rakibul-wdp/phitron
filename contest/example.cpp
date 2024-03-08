#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int A[n];
  for (int i = 0; i < n; i++)
    cin >> A[i];

  sort(A, A + n);

  int sum = 0;
  for (int i = 0; i <= 1; i++)
    sum += A[i];

  cout << sum << endl;

  return 0;
}