#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  if (n == 1)
    cout << n << "\n";
  else if (n <= 3)
    cout << "NO SOLUTION" << "\n";
  else
  {
    int start = n & 1 ? n - 1 : n;
    for (int i = start - 1; i > 0; i = i - 2)
      cout << i << " ";
    for (int i = start; i >= 2; i = i - 2)
      cout << i << " ";
    if (n & 1)
      cout << n;
    cout << "\n";
  }

  return 0;
}